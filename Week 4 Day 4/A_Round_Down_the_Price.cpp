#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       string s;
       cin>>s;
       ll n=stoi(s);
       ll l=s.size();
       ll r=1;
       for(int i=1;i<l;i++){
        r=r*10;
       }
       cout<<abs(r-n)<<endl;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}