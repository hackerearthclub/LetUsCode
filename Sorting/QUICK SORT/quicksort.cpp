#include<iostream>
#include<algorithm>

using namespace std;

int dopartition(int input[],int start, int end){

    int pivot=input[start];

    int count=0;
    for(int i=start+1;i<=end;i++){
        if(input[i]<=pivot)
            count++;
    }

    int pivotIndex=start+count;
    int temp=input[start];
    input[start]=input[pivotIndex];
    input[pivotIndex]=temp;

    int i=start,j=end;
    while(i<=pivotIndex&&j>=pivotIndex){
        while(input[i]<=pivot){
            i++;
        }
        while(input[j]>pivot){
            j--;
        }
        if(i<pivotIndex&&j>pivotIndex){
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }
return pivotIndex;
}

void quickSort(int input[], int start, int end){
if(start>=end){
    return;
}
int pivotIndex=dopartition(input, start, end);
quickSort(input, start, pivotIndex-1);
quickSort(input, pivotIndex+1, end);

}


void quickSort(int input[], int size){
	// Write your code here
    quickSort(input,0,size-1);
}



int main()
{
int arr[]= { 1,2,3,4 };

quickSort(arr, 4);

//sort(output,output+3);

for(int i=0;i<4;i++)
{
    cout<<arr[i]<<endl;

}
return 0;
}




























