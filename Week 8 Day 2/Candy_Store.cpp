#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int x,y;
      cin>>x>>y;
      if(x>=y){
        cout<<y<<'\n';

      } 
      else{
        int r=y-x;
        cout<<2*r+x<<'\n';
      } 
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