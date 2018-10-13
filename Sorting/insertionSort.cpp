#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
	int j;
	for(int i=1;i<n;i++){
         int k=arr[i];
         int j=i-1;
		while(j>=0 && arr[j]>k){
			arr[j+1]=arr[j];
			j--;
		}
		j++;
		arr[j]=k;
		}
}
int main(){
    int n,arr[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}  
	InsertionSort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i];
	} 
	return 0;
}
