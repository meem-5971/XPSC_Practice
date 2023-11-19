#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   int a,b;
   cin>>a>>b;
   if((a+b)>6) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';     
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