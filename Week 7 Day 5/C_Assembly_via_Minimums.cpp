#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    ll m=(n*(n-1))/2;
    int a[m];
    vector<int>b;
    map<int,int>mp;
    for(ll i=0;i<m;i++){
        cin>>a[i];
        
    }
   sort(a,a+m);
   //sort korar por subarray te xth element (n-x) times thakbe
   int x;
   for(int i=0;i<m;i+=x){
    cout<<a[i]<<" ";
    x=--n;
   }
  
     cout<<1000000000<<" ";
   
   cout<<'\n';
   }
    return 0;
}