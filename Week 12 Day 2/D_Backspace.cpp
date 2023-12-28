#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     string s;
     string t;
     cin>>s>>t;
     ll n=s.size();
     ll m=t.size();
     ll i=n-1;
     int f=1;
     for(int j=m-1;j>=0;j--){
        while(i>=0 && s[i]!=t[j]){
            i-=2;
        }
        if(i<0){
            f=0;
            break;
        }
        i-=1;
     } 
     if(f) cout<<"YES"<<'\n';
     else cout<<"NO"<<'\n';  
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  ll t;
  cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}