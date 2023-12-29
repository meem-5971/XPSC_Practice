#include<bits/stdc++.h>
#define ll long long
using namespace std;
 ll n,k;
 vector<ll>a; 
     
bool check(ll mid){
    ll mv=0;
    for(int i=n/2;i<n;i++){
        if(mid-a[i]>0) mv+=mid-a[i];
        if(mv>k) return false;
    }
    if(mv<=k) return true;
    else return false;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   cin>>n>>k;
   for(int i=1;i<=n;i++){
    ll x;
    cin>>x;
    a.push_back(x);
   }
   sort(a.begin(),a.end());
   ll l=1;
   ll r=2000000000;
   while(l!=r){
    ll mid=(l+r+1)/2;
        if(check(mid)){
            l=mid;
        }
        else{
            r=mid-1;
        }
       }
       cout<<l;
    return 0;
}