#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
      int n;
      cin>>n;
      int a[n];
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
      } 
      bool flag=false;
      for(int i=0;i<n;i++){
        if(mp[a[i]]%2 !=0){
            flag=true;
        }
      }
      if(flag) cout<<"Marichka"<<'\n';
      else cout<<"Zenyk"<<'\n';



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