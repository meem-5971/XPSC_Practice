#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     ll a,b,c,x,y;
     cin>>a>>b>>c>>x>>y;
     ll cnt=0;
     if(x>a){
        cnt+=(x-a);
     }
     if(y>b){
        cnt+=(y-b);
     }
     if(cnt<=c) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
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