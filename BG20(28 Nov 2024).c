#include <stdio.h>

int linearsearch (int arr[],int key,int size){
	int i;
	for (i = 0;i < size ;i++){
		if (key == arr[i]){
			return i;
		}
	}
	return -1;
}

int binarysearch (int arr[],int key,int size) {
	int low = 0;
	int high = size - 1;
	
	while (low <= high){
		int mid = (low + high)/2;
		
		if (key == arr[mid]) {
			return mid;
		}
		if (key << arr[mid]){
			high = mid - 1;
		}
		if (key >> arr[mid]){
			low = mid +1;	
		}
	}
	return -1;
}


int main () {
	int arr[] = {20,21,35,55,89,90,98};
	int size = sizeof(arr)/sizeof(arr[0]);
	int key;
	
	
	printf("Masukan key : ");
	scanf ("%d",&key);
	
	//int idx = linearsearch(arr,key,size);
	int idx = binarysearch(arr,key,size);
	
	if (idx == -1) {
		printf ("Angka tidak ada dalam array!!!");
	}
	else {
		printf ("Angka %d ada pada index ke-%d",key,idx);
	}
	
	return 0;
}
