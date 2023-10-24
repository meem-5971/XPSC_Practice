#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    ll n;  cin>>n;
   ll a[n+1];
    ll sum=0;
    for(int i=0;i<n;i++){
       cin>>a[i];
       sum+=abs(a[i]);
    }
     int flag=0;
     int ans=0;
     int cnt=0;
     
    for(int i=0;i<n;i++){
      if(a[i]<0){
        flag=1;
        cnt++;
      }
      else if(a[i]==0 && flag==1){
        cnt++;
      }
      else{
        if(cnt!=0) ans++;
        cnt=0;
        flag=0;
      }
   }
   if(cnt!=0) ans++;
   cout<<sum<<" "<<ans<<endl;
   }
    return 0;
}