#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       vector<ll>ans;
       ll cnt=0;
       for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            n=n/i;
           ans.push_back(i);
        }
        if(cnt==2){
           ans.push_back(n);
            break;
        }
       }
      if(cnt<2){
        cout<<"NO"<<'\n';
      }
      else if(ans[0]==ans[1] || ans[1]==ans[2] || ans[0]==ans[2]){
        cout<<"NO"<<'\n';
      }
      else{
        cout<<"YES"<<'\n';
        cout<<ans[0]<<" "<<ans[1]<<" "<<ans[2]<<'\n';
      }

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