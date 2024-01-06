#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,s;
   cin>>n>>s;
   vector<ll>a(n+1);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   ll x=0,l=0;
   ll ans=0;
   unordered_map<ll,ll>mp;
   for(int r=0;r<n;r++){
    mp[a[r]]++;
    while(mp.size()>s){
        mp[a[l]]--;
       if(mp[a[l]]==0){
        mp.erase(a[l]);
       }
       l++;
    }
    
     ans+=(r-l+1);
   }
    cout<<ans<<'\n';
    return 0;
}