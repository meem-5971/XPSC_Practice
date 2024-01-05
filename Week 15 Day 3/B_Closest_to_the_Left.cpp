#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,k;
   cin>>n>>k;
   vector<ll>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<k;i++){
    int x;
    cin>>x;
    ll l=-1,r=n;
    while(l+1<r){
        ll mid=l+(r-l)/2;
        if(a[mid]<=x){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<l+1<<'\n';

   }
    return 0;
}