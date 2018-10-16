//vector stack test
#include<iostream>
#include<string.h>
#include "stack_Vector.h"
using namespace std;

class Book{
public: 
	int price;
	char name[100];
	book(char *n,int p){
		strcpy(name,n);
		price=p;
	}

	void print(){
		cout<<"Name :"<<name<<endl;
		cout<<"price:"<<price<<endl;
	}

};
int main(){
    stack <int> s;
    for(int i=0;i<10;i++){
    	s.push(i);
    }
    while(!s.isEmpty()){
    	cout<<s.top()<<endl;
    	s.pop();
    }
     
     stack <Book> s2;
     Book b1("c++",150);
     Book b2("java",200);
     s2.push(b1);
     s2.push(b2);
     while(!s2.isEmpty()){
         cout<<s2.top()<<endl;     
            s2.pop()
   
     }


  return 0;
}