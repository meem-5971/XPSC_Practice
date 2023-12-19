#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
      ll x;
      cin>>x;
      ll i=0;
      vector<ll>ans;
      ans.push_back(x);
      while((1<<i)<x){//2 ar power jto prjnto jawa jay
        if(x & (1<<i)){
            x=x^(1<<i);
            ans.push_back(x);
 
        }
        i++;
      }
      while(x>1){
        ans.push_back(x/2);
        x/=2;
      }
        cout<<ans.size()<<'\n';
        for(auto u:ans){
            cout<<u<<" ";
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