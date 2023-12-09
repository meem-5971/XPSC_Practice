#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll type;
    cin>>type;
    ll mid,midcr;
    ll l=1,r=2e9;
    while(r-l> 1){
        mid=l+(r-l)/2;
        midcr=(mid*(mid-1))/2;
        if(midcr<=type){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    ll lowcr=(l*(l-1))/2;//lowcr ans track rakhe
    ll blnc=type-lowcr;//nCr theke jkhn direct ans pawa na jay 
    cout<<l+blnc<<'\n';

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