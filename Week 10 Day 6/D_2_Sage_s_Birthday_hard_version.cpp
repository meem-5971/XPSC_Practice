#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   vector<ll>a(n);
   for(ll i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   vector<ll>ans(n+2);
   ll j=0;
  
   for(ll i=1;i<n;i+=2){
    
    ans[i]=a[j++];
   
   }
   for(ll i=0;i<n;i++){
    if(ans[i]==0){
     ans[i]=a[j++];
    }
   }
    ll cnt=0;
    for(ll i=1;i<n;i+=2){
    
    if(ans[i] < ans[i-1] && ans[i]<ans[i+1]){
        cnt++;
    }
   
   }
    
   cout<<cnt<<'\n';
   for(int i=0;i<n;i++){
    cout<<ans[i]<<' ';
   } 
    return 0;
}