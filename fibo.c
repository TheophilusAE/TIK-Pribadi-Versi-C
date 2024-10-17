#include <stdio.h>

int fibo(int num){
	if (num == 0 || num == 1) {
		return 1;
	}
	else {
		return fibo(num - 1) + fibo (num - 2);
	}
}

int main () {
	int value;
	printf ("Masukan baris : ");
	scanf ("%d", &value);
	
	for (int i = 0;i < value;i++) {
		printf("%d ",fibo(i+1));
	}
	printf("\n\n%d",fibo(value));
	
	return 0;
}
