//InBuilt Sort
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool compare(int a,int b)
{
return a>b;
}


bool mycompare(string a,string b){
	return a>b;
}
int main(){
	/*
	int a[]={1,2,4,5,9,6,4,5,3,2};
	sort(a,a+10,compare);                                                 // a = startting address + 10 th address(excluding the last address) 
	// here function is passed as argument (this is used for printing in reverse order)
	for(int i=0;i<10;i++) cout<<a[i]<<" ";
	*/
	//one way to decalre string 
	string s("hello world");
	cout<<s<<endl;
	//Another way
	string s2="hello coding";
	cout<<s2<<endl;
	//third way 
	char a[]="how are you ";
	string s3(a);
	cout<<s3<<endl;
	
	char x[]="we are studying strings";
	char c[100];
	char d[]="we are studying strings";

	strcpy(c,x);   //copying b to c
	cout<<c<<endl;
	if(strcmp(x,d)==0) cout<<"match"<<endl;    //compares the ascii value and returns 0 when same string found
	else cout<<"not match"<<endl;
	
	
	string p[]={"Apple","banana","pineapple","coding"};  //string array
	sort(p,p+4,mycompare);                //now by this we create a function by controlling comparision     
	for(int i=0;i<4;i++){
		cout<<p[i]<<" ";
	}
	
	
	// to get the length of string
	cout<<p[1].length();  //banana length showed
	
	//for character array length  strlen(a);
	
	
	return 0;
	
	}
