#include<bits/stdc++.h>
#define ll long long
using namespace std;
  ll sum(ll n){
    int ans=0;
    while(n!=0){
        ans+=n%10;
        n=n/10;
    }
    return ans;
  }
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,s;
   cin>>n>>s;
   ll res=0;
   ll l=0;
   ll r=n;
   while(l<=r){
      ll mid=l+(r-l)/2;
      if(mid-sum(mid)>=s){
      
        res=mid;
        r=mid-1;
        
      }
      else{
       l=mid+1;
      }

   }
   if(res==0)
    cout<<res<<endl;
  else
   cout<<n-res+1<<endl;
   

    return 0;
}