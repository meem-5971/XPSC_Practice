#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
       int n;
       cin>>n;
       int a[n];
       unordered_map<int,int>mp;
       vector<int>v;
       for(int i=1;i<=n;i++){
        cin>>a[i];
        mp[a[i]]++;
        if(mp[1]>=1){
              v.push_back(a[i]);
        }
       } 
     int cnt=0;  
     unordered_map<int,int>mp2;
  for(int i=0;i<v.size();i++){
    if(v[i]==1){
        mp2[1]++;
if(mp2[1]==mp[1])
        break;
    }
       if(v[i]==0){
        cnt++;
       }
  }

  cout<<cnt<<'\n';
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