#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   ll n,h;
   cin>>n>>h;
   vector<ll>a(n+2);
   for(int i=0;i<n;i++){
      cin>>a[i];
   }     
   ll ans=0;
   ll l=1;
   ll r=h;
   while(l<=r){
    ll mid=(l+r)/2;
    ll z=0;//damage count
    for(ll i=0;i<n;i++){
        if(i==n-1) z+=mid;
        else{
            ll x=a[i+1]-a[i];
                if(x>=mid)z+=mid;
                else z+=x;
        }
    }
    if(z>=h)
        {
            ans=mid;
            r=mid-1;
        }
        else l=mid+1;
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