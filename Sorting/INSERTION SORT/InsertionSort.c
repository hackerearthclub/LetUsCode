#include<stdio.h>

void insertionSort(int Arr[], int N){

	int Key, j;
	for(int i=1; i<N; i++){
		Key = Arr[i];
		j = i-1;
		while(j>=0 && Arr[j] > Key){
			Arr[j+1] = Arr[j];
			j--;
		}
		Arr[j+1] = Key;
	}
}

void main(){

	int Arr[] = {13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7}, N = 16;

	printf("\nOrignal Array : ");
	for(int i=0; i<N; i++)
		printf("%d, ", Arr[i]);

	insertionSort(Arr, N);

	printf("\n Sorted Array : ");
	for(int i=0; i<N; i++)
		printf("%d, ", Arr[i]);
}
