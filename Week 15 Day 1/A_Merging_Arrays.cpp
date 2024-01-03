#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,m;
   cin>>n>>m;
   vector<ll>a(n);
   vector<ll>b(m);
   vector<ll>ans;
   for(int i=0;i<n;i++){
    cin>>a[i];
    ans.push_back(a[i]);
   }
    for(int i=0;i<m;i++){
    cin>>b[i];
    ans.push_back(b[i]);
   }
  sort(ans.begin(),ans.end());
   
   for(int i=0;i<ans.size();i++){
   cout<<ans[i]<<" ";
   }
    return 0;
}