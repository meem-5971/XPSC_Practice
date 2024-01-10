#include<bits/stdc++.h>
#define ll long long
using namespace std;
  ll k; 
   ll n;
   vector<ll>a;
bool good(ll x){
     ll sum = 0;
    for(int i=0; i<n; i++) {
        if (a[i] > x) sum +=x;
        else sum += a[i];
    }
    return (sum/x) >= k;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   
   cin>>k>>n;
   a.resize(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   ll l=0,r=1e12;
   while(l+1<r){
    ll mid=(l+r)/2;
    if(good(mid)){
        l=mid;
    }
    else{
        r=mid;
    }
   }
   cout<<l<<'\n';
    return 0;
}