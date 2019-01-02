//Selection Sort Recursion

#include<iostream>

using namespace std;

void SelectionSort(int a[],int s,int e){

	if(s==e-1) return;

	int min = s, temp;

	for(int i=s; i<e; i++){
		if( a[i] < a[min] )
			min = i;
	}

	temp = a[min];
	a[min] = a[s];
	a[s] = temp;

	SelectionSort(a, s+1, e);
}
int main(){
	int n, a[100];
	cout<<"Enter array size = ";
	cin>>n;
	cout<<"Enter " <<n <<" elements in array : \n";
	for(int i=0;i<n;i++) cin>>a[i];

	SelectionSort(a,0,n);

	cout<<"Sorted Array = ";
	for(int i=0;i<n;i++) cout<<a[i]<<" ";

	return 0;
}
