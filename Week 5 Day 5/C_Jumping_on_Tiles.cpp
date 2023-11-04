#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       string s;
       cin>>s;
       vector<ll>id[26];
       vector<ll>ans;
       ll n=s.size();
       ll m=0;
       for(int i=0;i<n;i++){
        id[s[i]-97].push_back(i+1); //prti ta character ar index
       } 
       ll cost=abs(s[0]-s[n-1]);//first r last character ar cost
       ll l;
       if(s[n-1]>s[0]){ //jdi last character boro hoy
        for(int i=s[0]-97;i<=s[n-1]-97;i++){
        l=id[i].size();//jdi akta char multiple times thake tahle size boro hbe
        m+=l;
        for(int j=0;j<l;j++){
            ans.push_back(id[i][j]);// ans ay push
        }
        }
       }
       else{//first char boro
        for(int i=s[0]-97;i>=s[n-1]-97;i--){
        l=id[i].size();
        m+=l;
        for(int j=0;j<l;j++){
            ans.push_back(id[i][j]);
        }
        }
       }
       cout<<cost<<" "<<m<<endl;
       for(ll i=0; i<m; i++){
            cout<<ans[i]<<" ";
        }
       cout<<'\n';
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    solve();
   }
    return 0;
}