#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n;
     cin>>n;
     vector<ll>a(n);
     map<ll,ll>mp;
     for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
      }  
      ll mx=0;
      for(int i=2;i<=n*2;i++){
        ll total=0;
        for(auto j:mp){
            int other=i-j.first;
            if(other>=1 && mp.count(other)){
             total+=min(j.second,mp[other]);
            }
        }
        total/=2;
        mx=max(mx,total);
      }
      cout<<mx<<'\n';

      
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