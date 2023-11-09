#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n,k;
        cin>>n>>k;
        if(n<2*k){
            cout<<"NO"<<'\n';
            return;
        }
        if(n==2*k){
            cout<<"YES"<<'\n';
        }
        else{
        ll rodd=(n/2+n%2)-k;//prti set ay akta kore odd deyar por j koyta odd ache
       
        if(rodd%2==0){ //rodd jdi even times thake 1st ar set ar odd value ar sthe sum korew total sum odd hbe
            cout<<"YES"<<'\n'; 
        }
        else{
            cout<<"NO"<<'\n';
        }

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