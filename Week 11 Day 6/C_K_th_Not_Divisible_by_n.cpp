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
    ll n,k;
    cin>>n>>k;
    //x ta divisor ache
    ll x=k/(n-1);//x=(k+x)/n
    if((x-k)%n==0){
        cout<<x+k-1<<'\n';
    }
    else{
        cout<<x+k<<'\n';
    }
   }

    return 0;
}