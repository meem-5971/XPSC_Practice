#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       vector<vector<ll>>a(n);
       set<ll>st;
       for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        for(ll j=0;j<x;j++){
            ll y;
            cin>>y;
            a[i].push_back(y);
            st.insert(y);
        }
       }
       ll ans=0;
       for(auto it: st){
        set<ll>ss;
        for(auto u: a){
            bool flag=true;
            for(auto v:u){
                if(v==it) flag=false;
            }
            if(flag){
                for(auto w:u){
                    ss.insert(w);
                }
            }
        }
        ans=max(ans,(ll)ss.size());
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