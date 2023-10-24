#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    ll n,m,h;
    cin>>n>>m>>h;
    ll a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    sort(a,a+n,greater<ll>());
    sort(b,b+m,greater<ll>());
     ll ans=0;
     ll x=min(m,n);
     for(int i=0;i<x;i++){
        ans+=min(a[i],(b[i]*h));
     }
    cout<<ans<<endl;

   }
    return 0;
}