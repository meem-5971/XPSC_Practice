#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   ll n;
   cin>>n;
   vector<ll>a(n+1);
   ll psum=0;
   for(int i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]>=0){
        psum+=a[i];
    }
   } 
   ll ans=0,add=0;
   for(int i=1;i<=n;i++){
    if(i%2==1){
        if(a[i]>0){
            add=max(add,psum);
            psum-=a[i];
        }
        else{
            add=max(add,psum+a[i]);
        }
    }
    else{
        if(a[i]>0){
            psum-=a[i];
            add=max(add,psum);
        }
        else{
            add=max(add,psum);
        }
    }
   }  
   ans+=add;
   cout<<ans<<'\n';  

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