#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MOD=1e9+7;  
ll fact1(int r) {
  ll result=1;
  for(int i=1;i<=r;i++){
    result=(result*i) %MOD;
  }
  return result;
}
ll fact2(int n,int r){
    ll result=1;
  for(int i=n;i>n-r;i--){
    result=(result*i) %MOD;
  }
  return result;
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    int n,r;
    cin>>n>>r;
    int prm=1;
    if(n>=r){
        prm=fact1(r);
    }
    else{
      prm=fact2(r,n);
    }
   cout<<prm<<'\n';
   }
    return 0;
}