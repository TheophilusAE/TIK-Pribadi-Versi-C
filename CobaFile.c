#include<stdio.h>

// Definisi struct mhs
struct mhs {
    char nim[20];
    char name[100];
    char address[500];
    char phone[50];
    int age;
    float gpa;
};
typedef struct mhs mhs;

// Membuat array penyimpanan mhs
mhs mahasiswa[1000];
int index = 0; // Untuk keep track ada berapa data yang tersimpan dari file

void loadFile() {
    FILE *fptr;
    fptr = fopen("data_mahasiswa.txt", "r");

    // Cek apakah file ada, kalau tidak ada, beri pesan error
    if (fptr == NULL) {
        printf("File is missing\n");
        return;
    }

    // Load data dari data_mahasiswa.txt ke array of struct
    while (fscanf(fptr, "%[^,],%[^,],%[^,],%[^,],%d,%f\n", 
                  mahasiswa[index].nim, 
                  mahasiswa[index].name, 
                  mahasiswa[index].address, 
                  mahasiswa[index].phone, 
                  &mahasiswa[index].age, 
                  &mahasiswa[index].gpa) != EOF ) {
        index++;
    }

    fclose(fptr);
}

int main() {
    loadFile();

    int i;
    for (i = 0; i < index; i++) { // Fix loop termination condition
        printf("%s %s %s %s %d %.2f\n\n", 
               mahasiswa[i].nim, 
               mahasiswa[i].name, 
               mahasiswa[i].address, 
               mahasiswa[i].phone, 
               mahasiswa[i].age, 
               mahasiswa[i].gpa);
    }

    return 0;
}
