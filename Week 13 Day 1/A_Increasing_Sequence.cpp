#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       vector<ll>a(n);
       ll t=1;
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==t){
            t++;
        }
        t++;
       } 
       cout<<t-1<<'\n';
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