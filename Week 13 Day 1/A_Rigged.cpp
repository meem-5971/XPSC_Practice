#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       ll s[n],e[n];
       for(int i=0;i<n;i++){
        cin>>s[i];
        cin>>e[i];
       } 
       bool flag=false;
       for(int i=1;i<n;i++){
        if(s[i]>=s[0] && e[i]>=e[0]){
            flag=true;
            break;
        }
       }
       if(flag) cout<<-1<<'\n';
       else cout<<s[0]-1<<'\n';
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