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
  vector<ll>a(n+2);
  for(ll i=1;i<=n;i++){
    cin>>a[i];
  } 
  multiset<ll>s;
  ll l=1;
  ll ans=0;
  for(ll i=1;i<=n;i++){
    s.insert(a[i]);
    while((*s.rbegin()-*s.begin())>k){
        s.erase(s.find(a[l++]));
    }
    ans+=(i-l+1);
  }
  cout<<ans<<'\n';
    return 0;
}