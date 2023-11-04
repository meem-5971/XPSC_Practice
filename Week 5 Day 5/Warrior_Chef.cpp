#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
   ll n,h;
    cin>>n>>h;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
   // sort(a,a+n);
    ll l=0,r=INT_MAX,ans;
    while(l<=r){
        ll r1=h;
        ll mid=l+(r-l)/2;
        for(int i=0;i<n;i++){
           if(a[i]>mid){
            r1-=a[i];
           }
        }
       
        if(r1>0){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
           
        }
    }
    cout<<ans<<endl;
   }
    return 0;
}