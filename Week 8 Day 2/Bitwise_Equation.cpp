#include<bits/stdc++.h>
#define ll long long
using namespace std;
 /* a=1.b=2 dhore nicchi cz 1&2=0; tahle 0|c=c 
 the expression will be c^d=n; we will determine c^n=d
 c 2 theke boro hbe tai khuje ber kortesi c
 
 */ 
void solve(){
    ll n;
    cin>>n;
    if(n == 0){// n^0=n; then if n=0, let d=7; then (A&B)|C=7
    //if(a&b)= 4 , then c=3; // if a=4,b=6 then a&b=4
        cout<<4<<" "<<6<<" "<<3<<" "<<7<<"\n";
        return;
    }
    else{
        ll a,b,c=0,d=0;
   a=1,b=2;
   for(ll i=3;i<=1000000;i++){
    ll ans=n^i;
    if(i==ans || ans<=2) continue;// c,d same hote parbe na , adr value 1,2 hbe na
    c=ans;
    d=i;
    break;
   } 
   if(c==0) cout<<-1<<'\n';
   else cout<<a<<" "<<b<<" "<<c<<" "<<d<<'\n'; 
    }
     
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