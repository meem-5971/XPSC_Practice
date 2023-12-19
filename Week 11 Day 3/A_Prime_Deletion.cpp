#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      string s;
      cin>>s;
      string ans="";
      for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            ans+='1';
        }
        else if(s[i]=='7'){
            ans+='7';
        }
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