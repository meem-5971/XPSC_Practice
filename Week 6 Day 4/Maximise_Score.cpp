#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   }  
  int ans=INT_MAX;
    for(int i=0;i<n;i++){
     if(i==0){//alice 1st index choose korle
        ans=min(ans,abs(a[i]-a[i+1]));
     }
     else if(i==n-1){//alice last index choose korle
        ans=min(ans,abs(a[i]-a[i-1]));
     }
     else{//alice majher kno index choose korle 2 paser theke dekhte hbe max konta ja bob choose korbe seta ans hbe na
        ans=min(ans,max((abs(a[i]-a[i+1])),(abs(a[i]-a[i-1]))));
     }
   } 
   cout<<ans<<endl;   
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