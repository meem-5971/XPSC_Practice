#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      string s,t;
      cin>>s>>t;
      ll n=t.size();
      sort(t.begin(),t.end());
      if(t[0]=='a' && t.size()>1) cout<<-1<<endl;
      else if(t[0]=='a') cout<<1<<endl;
      else{
        ll ans=1;
        for(ll i=1;i<=s.size();i++){
            ans*=2;
        }
        cout<<ans<<endl;
      }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int a; cin>>a;
   while(a--){
    solve();
   }
    return 0;
}