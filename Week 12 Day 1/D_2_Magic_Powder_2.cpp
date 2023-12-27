#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
  
void solve(){
      ll n,k;
      cin>>n>>k;
      vector<ll>a(n+2);  
      vector<ll>b(n+2); 
      for(int i=0;i<n;i++){
        cin>>a[i];
      } 
      for(int i=0;i<n;i++){
        cin>>b[i];
      } 
      ll low=0,high=20000000000;
      while(low<=high){
        ll mid=low+(high-low)/2;
        ll z=0,cost=k;
        for(ll i=0;i<n;i++){
            if(mid*a[i] > b[i])
        cost -= (mid*a[i]-b[i]);
        if(cost<0)break;
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