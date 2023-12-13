#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      vector<int>a(n);
      int mx=INT_MIN;
      for(int i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
      }  
 int t;
 int i=0;
 t=mx-a[0];
 ll ans=0;
 ans+=t;

 for( i=1;i<n;i++){
     
    if(mx-a[i]!=0){
        t=__gcd(t,mx-a[i]);
        ans+=(mx-a[i]);
    }
 }
   ans/=t;
   cout<<ans<<" "<<t<<'\n';   

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   
    solve();
   
    return 0;
}