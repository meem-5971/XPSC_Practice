#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int a[3];
       for(int i=0;i<3;i++){
        cin>>a[i];
       } 
       int cnt=0;
       for(int i=0;i<3;i++){
        if(a[i]==0){
            cnt++;
        }
       }
       if(cnt>=2){
        cout<<"Water filling time"<<'\n';
       }
       else{
        cout<<"Not now"<<'\n';
       }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    solve();
   }
    return 0;
}