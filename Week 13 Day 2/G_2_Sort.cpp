#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   ll n,k;
   cin>>n>>k;
   ll a[n+3];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }     
   int cnt=1;
   int ans=0;
   for(int i=1;i<n;i++){
    if(a[i-1]<2LL*a[i]){
        cnt++;
    }
    else{
        cnt=1;
    }
    if(cnt>k){
        ans++;
    }
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