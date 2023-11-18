#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll l,r;
   cin>>l>>r;
   if(abs(r-l)%2!=0){
    cout<<"YES"<<'\n';
    //2ta consecutive number ar gcd 1
     for(ll i=l;i<=r;i+=2){
       cout<<i<<" "<<i+1<<'\n';
     }
   }
   else{
    cout<<"NO"<<'\n';
   }
    return 0;
}