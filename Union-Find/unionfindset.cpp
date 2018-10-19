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

const int MAX = 100000; // maximum number of nodes

int d[MAX];

void initialize(){
	for(int i = 0 ; i < MAX ; ++i){
		d[i] = i; //each node points itself
	}
}

int findset(int x){ // finds which set the node belongs to with path compression
	if(d[x] == x) return x; // if the node points itself return the node
	return d[x] = findset(d[x]); // the node will point directly to the representative of the set it belongs
}								 // path is compressed,as the node directly points to the representative of the set

void unionset(int x,int y){
	d[findset(y)] = d[findset(x)]; //the sets will be merged, the representative of the set y belongs to 
}								   //is now the representative of the merged set

int main(){

	return 0;
}