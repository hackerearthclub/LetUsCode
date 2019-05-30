#include<iostream>

using namespace std;


void merge(int part1[],int part2[], int size1, int size2, int output[]){
    int i=0;
    int j=0;
    int k=0;
    while((i<size1)&&(j<size2)){
        if(part1[i]<part2[j]){
        output[k]=part1[i];
        k++;
        i++;
        }
        else{
        output[k]=part2[j];
        j++;
        k++;
        }
    }
    while(i<size1){
        output[k]=part1[i];
        k++;
        i++;
    }
    while(j<size2){
        output[k]=part2[j];
        j++;
        k++;
    }


}

void mergeSort(int input[], int size){
	// Write your code here
    if(size<=1)
        return;
    int mid=size/2;
    int part1[100],part2[100];
    int size1=mid;
    int size2=size-mid;
    for(int i=0;i<size1;i++){
        part1[i]=input[i];
    }
    int k=0;
    for(int i=size1;i<size;i++){
        part2[k]=input[i];
        k++;
    }
    mergeSort(part1, size1);
    mergeSort(part2, size2);
    merge(part1,part2,size1,size2,input);

}



int main()
{
int arr[]= { 1,2,3,4 };

mergeSort(arr, 4);

//sort(output,output+3);

for(int i=0;i<4;i++)
{
    cout<<arr[i]<<endl;

}
return 0;
}




























