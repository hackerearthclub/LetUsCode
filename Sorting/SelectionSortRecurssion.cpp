//Selection Sort Recursion
#include<iostream>
using namespace std;
int SelectionSort(int a[],int n,int i){
	if(i==n-1) return 
	
}
int main(){
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++) cin>>a[i];
	SelectionSort(a,n,0);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	return 0;
}
