#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,k;
      cin>>n>>k;
      vector<ll>a(n);  
      vector<ll>b(n); 
      for(int i=0;i<n;i++){
        cin>>a[i];
      } 
      for(int i=0;i<n;i++){
        cin>>b[i];
      } 
      ll low=0,high=200000000000;
      while(low<=high){
        ll mid=low+(high-low)/2;
        ll z=0,cost=0;
        for(ll i=0;i<n;i++){
            cost+=max(a[i]*mid-b[i],z);
        }
        if(cost<=k) low=mid+1;
        else high=mid-1;
      }
      cout<<high<<'\n';
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   
    solve();
   
    return 0;
}