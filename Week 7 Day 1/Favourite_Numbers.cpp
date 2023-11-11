#include<bits/stdc++.h>
#define ll long long
using namespace std;  
void solve(){
  int n;
  cin>>n;
  if(n%2==0 && n%7==0){
    cout<<"Alice"<<'\n';
  }
  else if(n%2!=0 && n%9==0){
    cout<<"Bob"<<'\n';
  }
  else{
    cout<<"Charlie"<<'\n';
  }      
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}