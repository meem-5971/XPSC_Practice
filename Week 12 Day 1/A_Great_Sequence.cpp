#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n,x;
       cin>>n>>x;
       vector<ll>a(n);
       map<ll,ll>mp;
       for(int i=0;i<n;i++){
        cin>>a[i];
       } 
       sort(a.begin(),a.end());
       reverse(a.begin(),a.end());
        for(int i=0;i<n;i++){
        mp[a[i]]++;
       } 
       ll ans=0;
       for(int i=n-1;i>=0;i--){
       if(mp[a[i]]){
        if(mp[x*a[i]]){
            mp[x*a[i]]--;
        }
        else ans++;
         mp[a[i]]--;
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