#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       string s;
       cin>>s;
       int a=(s[0]-'a'); 
       int b=(s[1]-'a'); 
       if(a>b) cout<<(a*25+b+1)<<'\n';//letter repeat hoar agy
       else cout<<(a*25+b)<<'\n';//letter repeat hoar por
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