#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 ll n;
 cin>>n;
 vector<ll>pos(n);
 for(int i=0;i<n;i++){
    cin>>pos[i];
 }
 ll r=1000000/2; 
 ll ans=LLONG_MIN;
 ll d=0;
 for(int i=0;i<n;i++){
    if(pos[i]>r){
      d=1000000 - pos[i];
    }
    else if(pos[i]<=r){
        d=pos[i]-1;
    }
    ans=max(ans,d);
   
 }
 cout<<ans<<'\n';
    return 0;
}