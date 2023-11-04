#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n,m;
   cin>>n>>m;
   ll a[n];
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a,a+n);
   ll l=0,r=INT_MAX,ans;
   while(l<=r){
    ll mid=l+(r-l)/2;
    ll s=0;
    for(ll i=0;i<n;i++){
      if(a[i]<mid){
        s+=(mid-a[i]);
      }
    }
    if(s> m){
        r=mid-1;
    }
    else{
        l=mid+1;
        ans=mid;
    }
   }
   cout<<ans<<endl; 
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