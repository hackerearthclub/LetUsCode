//Bubble sort
#include<iostream>
using namespace std;
void BubbleSort(int *a,int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++)
		{
         if(*(a+j)>*(a+j+1)) swap(*(a+j),*(a+j+1));			
			
		}
		}
}

void Input(int *a,int n){
	for(int i=0;i<n;i++) cin>>*(a+i);
}

void Output(int *a,int n){
	for(int i=0;i<n;i++) cout<<*(a+i)<<endl;
}



int main(){
	int a[100],n;
	cin>>n;
	Input(&a[0],n);    //Input(a,n)   a=&a[0]
	BubbleSort(&a[0],n);
	Output(&a[0],n);
	return 0;
}
