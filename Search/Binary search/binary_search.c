#include<stdio.h>

// Function for Iterative Code for Binary Search Algorithm
int Binary_Search(int Arr[], int size, int find){

	int L = 0, R = size-1;
	int mid;
	
	while(L <= R){
		mid = L + (R-L)/2;
		
		if(Arr[mid] == find)
			return mid;
		else if(Arr[mid] < find)
			L = mid+1;
		else
			R = mid-1;
	}
	
	return -1;
	
}

// Function for Recursive Code for Binary Search Algorithm
int Binary_Search_Recursive(int Arr[],int size,int find,int start,int end)
{

	if(start>end)
	{
		return -1;
	}

	int mid=start+(end-start)/2;

	if(Arr[mid]>find)
	{
		return Binary_Search_Recursive(Arr,size,find,start,mid-1);
	}
	else if(Arr[mid]<find)
	{
		return Binary_Search_Recursive(Arr,size,find,mid+1,end);
	}
	else
	{
		return mid;
	}
}



int main(){

	int Arr[10] = {1, 3, 5, 7, 8, 10, 15, 20, 25, 60}, n = 10, pos;
	
	pos = Binary_Search(Arr, n, 106);
	if(pos == -1)
		printf("\n106 not found in array");
	else
		printf("\n106 found at %d index", pos);
	
	pos = Binary_Search(Arr, n, 10);
	if(pos == -1)
		printf("\n10 not found in array");
	else
		printf("\n10 found at %d index\n", pos);


	pos = Binary_Search_Recursive(Arr, n, 106,0,105);
	if(pos == -1)
		printf("\n106 not found in array");
	else
		printf("\n106 found at %d index", pos);
	
	pos = Binary_Search_Recursive(Arr, n, 10,0,9);
	if(pos == -1)
		printf("\n10 not found in array");
	else
		printf("\n10 found at %d index\n", pos);
	

	return 0;
}
