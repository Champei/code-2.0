#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,t;
	cin>>n>>t;
    char q[n];
    for(int i=0 ; i<n ; i++){
    	cin>>q[i];
    }
    for(int i=0 ; i<t ; i++){
    	for(int j=0 ; j<n-1 ; j++){
    		if(q[j]<q[j+1]){
    			swap(q[j],q[j+1]);
             j+=1;
    		}
    	}
    }
    for(int i=0 ; i<n ; i++){
    	cout<<q[i];
    }
    return 0;
}