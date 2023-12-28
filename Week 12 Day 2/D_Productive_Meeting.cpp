#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll n;
     cin>>n;
     priority_queue<pair<int,int>>pq;
     for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(x!=0){
            pq.push({x,i});
        }
     }   
     vector<pair<int,int>>ans;
     while(pq.size()>1){
     auto a=pq.top();
     pq.pop();
     auto b=pq.top();
     pq.pop();
     ans.push_back({a.second,b.second});
     if(a.first>1){
        pq.push({a.first-1,a.second});
     }
     if(b.first>1){
        pq.push({b.first-1,b.second});
     }
     }
     cout<<ans.size()<<'\n';
     for(int i=0;i<ans.size();i++){
      cout<<ans[i].first<<" "<<ans[i].second<<'\n';
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