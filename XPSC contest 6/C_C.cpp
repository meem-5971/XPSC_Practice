#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n;
    cin>>n;
    int a[n];
    int d[n];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }  
    for(int i=0;i<n;i++){
        cin>>d[i];
        mp[d[i]]++;
    } 
    vector<int>v;
    for(auto it:mp){
        v.push_back(it.second);
    }  
    sort(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<'\n'; 
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