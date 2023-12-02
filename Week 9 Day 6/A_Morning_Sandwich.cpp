#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int a,b,c;
     cin>>a>>b>>c;
     int s=b+c;
     if(s>=a){
        cout<<a+a-1<<'\n';
     } 
     else{
        cout<<2*s+1<<'\n';
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