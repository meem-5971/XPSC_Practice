#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,q;
   cin>>n>>q;
   map<ll,ll>mp;
   ll a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(mp[a[i]]==0){
        mp[a[i]]=i+1;
    }
   }
   for(int i=0;i<q;i++){
    ll x;
    cin>>x;
    ll ans=mp[x];
    cout<<ans<<' ';
    mp.erase(x);
    for(auto u:mp){
        if(u.second < ans){
        mp[u.first]=u.second+1;
        }
    }
    mp[x]=1;

   }

    return 0;
}