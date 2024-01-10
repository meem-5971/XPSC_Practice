#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   ll n;
   cin>>n;
    ll x=log2(n),val=1;//log2 gives nearest 2 power
     while(x--){
        val*=2;
     }    
    ll d=n-val;
    string s;
    while(d){
        s+=(d%2 +'0');
        d/=2;
    }
    vector<ll>ans;
    ans.push_back(n);
    for(ll i=0;i<s.size();i++){
        if(s[i]=='1'){
            ans.push_back(n-pow(2,i));
            n-=pow(2,i);
        }
    }
    while(n){
        n/=2;
        if(n){
            ans.push_back(n);
        }
    }
    cout<<ans.size()<<'\n';
    for(auto i:ans){
        cout<<i<<' ';
    }
    cout<<'\n';
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