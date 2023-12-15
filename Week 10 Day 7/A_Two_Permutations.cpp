#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   ll n,a,b;
   cin>>n>>a>>b;
   if(((a+b)<n-1) || (a==n && b==n)){
    cout<<"Yes"<<'\n';
   }
   else{
    cout<<"No"<<'\n';//p,q ar mjhe differ korar range ta pabo na
   }     
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  ll t;
  cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}