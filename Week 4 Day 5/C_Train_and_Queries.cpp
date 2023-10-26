#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        //vector<int>id;
        map<int,vector<int>>mp;
        for(int i=0;i<n;i++){
            mp[v[i]].push_back(i);
        }
        while(q--){
           int a,b; cin>>a>>b;
           if(mp[a].empty() || mp[b].empty()){
            cout<<"NO"<<endl;
            continue;
           }
           if(a==b){
            cout<<"YES"<<endl;
           }
           else if(mp[a].front()<mp[b].back()){
            cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }

        }
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