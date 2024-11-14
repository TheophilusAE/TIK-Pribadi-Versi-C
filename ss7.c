#include <stdio.h>
#include <string.h>

//struct mahasiswa{
//	int nim;
//	char nama[50];
//	float gpa;
//};
//
//int main () {
//	struct mahasiswa mhs;
//	strcpy(mhs.nama, "Bill Deva");
//	mhs.gpa = 3.99;
//	mhs.nim = 270116384;
//	
//	printf("Mahasiswa 1 :\n");
//	printf ("nama : %s\n", mhs.nama);
//	printf ("NIM : %d\n", mhs.nim);
//	printf ("GPA : %.2f", mhs.gpa);
//}


void buble (int array [], int size){
	for (int i = 0;i < size - 1;++i){
		for (int j =0; j <size - i - 1;++j){
			if (array[j] > array[j+1]) {
			int temp = array [j];
			array [j] = array [j+1];
			array [j+1] = temp;
			}
		}
	}
}

int main () {
	int data[] = {28,90,100,5,17,49};
	int size = sizeof(data)/sizeof(data[0]);
	printf ("Unsorted Data : \n");
	for (int i = 0;i < size;i++) {
		printf("%d ", data[i]);
	}
	
	buble(data,size);
	
	printf("\nSorted Data : \n");
	for (int j = 0;j < size;j++) {
		printf("%d ", data[j]);
	}
}
