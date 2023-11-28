#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll a,b,c,d;
       cin>>a>>b>>c>>d;
       if((a+1)%b == (c+1)%d){//corner case
        cout<<1<<'\n';
        return;
       } 
       ll r=a%b;
       ll ans=(b*d)/__gcd(b,d);//lcm theke agyr remainder minus
       cout<<ans-r<<'\n';
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