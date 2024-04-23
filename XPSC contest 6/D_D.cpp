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
    ll n,m;
    cin>>n>>m;
    vector<int>a(m);
    map<int,int>mp;
    ll sum=0;
    for(int i=0;i<m;i++){
        cin>>a[i];
        sum+=a[i];
       
    }
    ll res=( n*(n+1))/2;


    
    cout<<res-sum<<endl;
  } 
    return 0;
}