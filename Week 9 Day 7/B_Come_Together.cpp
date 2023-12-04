#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
  int xa,xb,ya,yb,za,zb;
  cin>>xa>>xb>>ya>>yb>>za>>zb;
  ll ans=1;
  if((xa>ya && xa>za ) || (xa<ya && xa<za)) {
    ans+=min(abs(xa-ya),abs(xa-za));
  } 
  if((xb>yb && xb>zb ) || (xb<yb && xb<zb)) {
    ans+=min(abs(xb-yb),abs(xb-zb));
  } 
  cout<<ans<<'\n'; 
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin>>t;
 while(t--){
    solve();
 }  
    return 0;
}