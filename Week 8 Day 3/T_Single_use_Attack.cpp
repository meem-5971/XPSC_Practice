#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
     int h,x,y;
     cin>>h>>x>>y;
     h-=y;
     if(h%x ==0){
        cout<<(h/x)+1<<'\n';
     }   
     else{
        cout<<(h/x)+2<<'\n';
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