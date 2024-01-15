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
   ll x,y;
   vector<pair<int,int>>a(n);
   for(int i=0;i<n;i++){
    cin>>x>>y;
    a.push_back({x,1});
    a.push_back({y,-1});
   }
   sort(a.begin(),a.end());
   ll cr=0;
   ll ans=0;
   for(auto u:a){
    cr+=u.second;
    ans=max(ans,cr);
   }
   cout<<ans<<'\n';
    return 0;
}