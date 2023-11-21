#include<bits/stdc++.h>
#define ll long long
#define in_n int n; cin>>n;
const int MOD=1e9+7;
using namespace std;
  
void solve(){
      in_n;
      int a[n];
      for(int i=0;i<n;i++){
       cin>>a[i];
      }
      map<int,int>mp;
      for(int i=0;i<n;i++){
       mp[a[i]]++;
      }
      ll ans=0, t=1;
     
      for(int i=1;i<=n;i++){
       ll tmp= mp[i]*t;// kno akta element jdi multiple times ase tahle se jto bar asce porer element gulor sthe toto bar same subsequence dibe
       tmp=tmp%MOD;
       ans+=tmp;
       t=tmp;
       ans%=MOD;
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