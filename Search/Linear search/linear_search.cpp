#include<iostream>

using namespace std;

int linearSearch(int arr[], int n, int find){

	for(int i=0; i<n; i++){
		if( arr[i] == find ){
			return i;
		}
	}
	return -1;
}

int main(){

	int arr[] = {49, 64, 67, 70, 8, 5, 26, 66, 75, 24}, n = 10;
	int loc, find;

	find = 70;
	loc = linearSearch(arr, n, find);

	if( loc == -1 ){
		cout<<find <<" not found in array";
	}
	else{
		cout<<find <<" fount at " <<loc <<" index";
	}

	return 0;
}
