#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
   int n;
   ll x;
   cin>>n;
   cin>>x;
   ll a[n];
   vector<ll>v;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]!=x){
        v.push_back(a[i]);
    }
   }
   for(int val: v){
    cout<<val<<" ";
   }
   cout<<endl;
   
    return 0;
}