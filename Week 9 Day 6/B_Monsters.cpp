#include<bits/stdc++.h>
#define ll long long
using namespace std;
 //sorting ar custom class lagbe 
void solve(){
     int n,k;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }   
     vector<pair<int,int>>ans;
     for(int i=0;i<n;i++){
        if(a[i]%k ==0) cout<<i+1<<' ';
        else{
           ans.push_back({a[i]%k,i+1}); 
        }
     }
     sort(ans.begin(),ans.end(),[&](pair<int,int>x,pair<int,int>y){
       if(x.first==y.first){
            return (x.second<y.second);
         }
         return (x.first>y.first);
     });
     for(auto u:ans){
        cout<<u.second<<" ";
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