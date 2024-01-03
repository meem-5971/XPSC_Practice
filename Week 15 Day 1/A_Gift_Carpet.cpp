#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n,m;
   cin>>n>>m;
   string s[n];
   for(int i=0;i<n;i++){
     cin>>s[i];
   }
   string st="vika";
   int t=0;
   for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(s[j][i]==st[t]){
            t++;
            if(t==4){
             cout<<"YES"<<'\n';
            return ;
            } 
            break;

        }
    }
   }
   
 cout<<"NO"<<'\n';
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