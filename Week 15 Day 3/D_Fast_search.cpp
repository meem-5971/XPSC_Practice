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
   vector<ll>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   ll k;
   cin>>k;
   for(int i=0;i<k;i++){
    ll l,r;
    cin>>l>>r;
    auto low=lower_bound(a.begin(),a.end(),l);
    if(low==a.end()){
       cout<<0<<' ';
    }
    else{
        auto high=upper_bound(low,a.end(),r);
        cout<<high-low<<' ';
    }
   }
   cout<<'\n';
    return 0;
}