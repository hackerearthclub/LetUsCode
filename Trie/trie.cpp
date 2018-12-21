#include <bits/stdc++.h>
#define endl '\n'
#define space ' '
#define st first
#define nd second
#define pb push_back
#define mp make_pair
#define ii pair <int,int>
#define iii pair < int,pair <int,int> >
#define vi vector <int>
#define vii vector < pair<int,int> >
#define forr(i,A,B) for(int i=A;i<B;++i)
#define input(file) freopen(file,"r",stdin)
#define output(file) freopen(file,"w",stdout)
using namespace std;

const int MAX = 10000; // maximum size of the dictionary

int trie[MAX][26]; // initialized to 0
int sz = 0; // size of the trie

void insert(string s){
	int v = 0; // start node
	for(int i = 0; i < s.size() ; ++i){ // iterate over the string
		int character = s[i] - 'A'; // converts the character to int, A is 0, B is 1 , etc.
		if(trie[v][character] == 0){ 
			trie[v][character] = ++sz;
		}
		v = trie[v][character];
	}
}

int search(string s){
	int v = 0;
	for(int i = 0; i < s.size() ; ++i){
		int character = s[i] - 'A'; // converts the character to int, A is 0, B is 1 , etc.
		if(trie[v][character] == 0){ 
			return 0;
		}
		v = trie[v][character];
	}
	return 1;
}

int main(){
	int n;
	string s;
	cin>>n;
	for(int i = 0 ; i < n ; ++i){
		cin>>s;
		insert(s); // add word to the dictionary
	}
	for(int i = 0 ; i < n ; ++ i){
		cin>>s;
		if(search(s)){
			cout<<"The word is included in the dictionary\n"; //the word is a prefix of one of the inserted words
		}
		else{
			cout<<"The word is not included in the dictionary\n";
		}
	}
	return 0;
}
