#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   int n;
   cin>>n;
   vector<int>a(n+1);
   for(int i=1;i<=n;i++){
    cin>>a[i];
   }     
   a[0]=-1;
   if(a[n]==1){
    cout<<"NO"<<'\n';
    return;
   }
   cout<<"YES"<<'\n';
   vector<pair<int,int>>res;
   int cnt=0;
   for(int i=n;i>=1;i--){
    cnt++;
    if(a[i]!=a[i-1]){
        res.push_back({cnt,a[i]});//1,0 ar count
        cnt=0;
    }
   }
   vector<int>ans;
   int ok=0;
   if(res.size()%2){
    ok=1;
   }
   for(int i=0;i<res.size()-ok;i+=2){
     int z=res[i].first;
     int o=res[i+1].first;
     int t=z+o-1;
     for(int j=0;j<t;j++){
        ans.push_back(0);
     }
     ans.push_back(o);

   }
   if(ok==1){
    int t=res[res.size()-1].first;
    for(int j=0;j<t;j++){
        ans.push_back(0);
     }
   }
   for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<' ';
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