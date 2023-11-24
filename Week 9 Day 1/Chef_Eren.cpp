#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n,a,b;
     cin>>n>>a>>b;
     int r1=n/2;
     int r2=r1;
     if(n%2) r2++;
        cout<< (r1*a) + (r2*b)<<endl;
             
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