#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    ll a,b,c;
    cin>>a>>b>>c;
    //min nmbr jeta hote pare
    ll x=pow(10,c-1);
    ll y=pow(10,c-1);
    while(x<(ll)pow(10,a-1)){
        x*=2;
    }
    while(y<(ll)pow(10,b-1)){
        y*=3;
    }
    cout<<x<<' '<<y<<'\n';
   }
    return 0;
}