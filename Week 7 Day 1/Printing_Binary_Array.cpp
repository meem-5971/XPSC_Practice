#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    
	    cin>>x;
	    int a[x];
	    for (int i=0;i<x;i++)
	    cin>>a[i];
	for (int i=0;i<x;i++){
	if(a[i]==0)
	cout<<1<<" ";
	else
	cout<<0<<" ";
	}
	puts("");
	}
	return 0;
}