#include <stdio.h>

int main()
{
    int a, b, c, d;
    
    printf("Masukkan panjang pola: ");
    scanf("%d", &a);
    
    printf("Pola 1\n");
    
    for (b = 1; b <= a; b++) {
        for (c = 1; c <= b; c++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Pola 2\n");
    
    for (b = 1; b <= a; b++) {
        for (c = a; c >= b; c--) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Pola 3\n");
    
    for (b = 1; b <= a; b++) {
        for (c = 1; c < b; c++) {
            printf(" ");
        }
        for (d = a; d >= b; d--) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Pola 4\n");
    
    for (b = 1; b <= a; b++) {
        for (c = a; c > b; c--) {
            printf(" ");
        }
        for (d = 1; d <= b; d++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Pola 5 \n");
    
    for (b = 1; b <= a; b++) {
        for (c = a; c > b; c--) {
            printf(" ");
        }
        for (d = 1; d <= (2 * b - 1); d++) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Pola 6 \n");
    
    for (b = 1; b <= a; b++) {
        for (c = 1; c < b; c++) {
            printf(" ");
        }
        for (d = a; d >= (2 * b - a); d--) {
            printf("*");
        }
        printf("\n");
    }
    
    printf("Pola 7 \n");
    
    for (b = 1; b <= a; b++) {
        for (c = a; c > b; c--) {
            printf(" ");
        }
        for (d = 1; d <= (2 * b - 1); d++) {
            printf("*");
        }
        printf("\n");
    }
    
    for (b = 2; b <= a; b++) {
        for (c = 1; c < b; c++) {
            printf(" ");
        }
        for (d = a; d >= (2 * b - a); d--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
