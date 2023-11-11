#include<bits/stdc++.h>
#define ll long long
using namespace std;  
void solve(){
     int x,a;
     cin>>x>>a;
     double y= ceil((double)x/2);
     if(a>=y){
        cout<<"YES"<<'\n';
     }   
     else{
         cout<<"NO"<<'\n';
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