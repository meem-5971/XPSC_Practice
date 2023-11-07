#include<bits/stdc++.h>
#define ll long long
using namespace std;
 //sliding window 
void solve(){
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     int cnt=0;
     for(int i=0;i<k;i++){
       if(s[i]!='B'){
        cnt++;
       }
     } 
     int ans=cnt;
      for(int i=k;i<n;i++){
       if(s[i]!='B'){
        cnt++;
       }
       if(s[i-k]!='B'){
        cnt--;
       }
       ans=min(ans,cnt);
     } 
   
     cout<<ans<<endl;  
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}