#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
    int x,y;
    cin>>x>>y;
    if(x>y || y%x !=0){
        cout<<0<<" "<<0<<'\n';
        return;
            }    
      if(x==y){
         cout<<1<<" "<<1<<'\n';
        return;
      }  
      cout<<1<<" "<<y/x<<endl;
      return;    
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