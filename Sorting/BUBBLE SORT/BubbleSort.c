#include<stdio.h>

void bubbleSort(int arr[], int n){

	int temp;

	for(int i=0; i<n; i++){
		for(int j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void main(){

	int arr[] = {49, 64, 67, 70, 8, 5, 26, 66, 75, 24}, n = 10;
	int i;

	printf("Orignal Array : ");
	for(i=0; i<n; i++){
		printf("%d, ", arr[i]);
	}

	bubbleSort(arr, n);

	printf("\n Sorted Array : ");
	for(i=0; i<n; i++){
		printf("%d, ", arr[i]);
	}
}
