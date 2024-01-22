#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      ll cnt=0;
      vector<ll>a(n+2);
      map<ll,ll>mp;
      for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
     cnt=max(cnt,mp[a[i]]);
      }  
    //  cout<<cnt<<'\n'<<'\n';
    ll ans=0;
  while(cnt<n){
    ll d=min(n-cnt,cnt);
    ans+=d+1;
    cnt+=d;
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