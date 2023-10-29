#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool areSame(double a,double b)
{
    return fabs(a-b)<1e-14;
}
void solve(){
    ll n;
    cin>>n;
    ll a[n];
    ll mx=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
    }   
    ll l=1;
    ll r=mx;
    while(l<=r){
        ll mid=(l+r)/2;
        double ans=1.0;
        for(ll i=0;i<n;i++){
          ans *= (a[i]*1.0 / mid*1.0);
        }
     if(areSame(ans,1.0)){
        cout<<"YES"<<endl;
        return;
     }
     else if(ans>1){
        l=mid+1;
     }
     else{
        r=mid-1;
     }
    } 
    cout<<"NO"<<endl;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}