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
  int b[n];
  for(int i=0;i<n;i++){
    cin>>b[i];
  }  
  for(int i=0;i<n;i++){
    if(i==0) cout<<b[i]-a[i]<<" ";
    else{
        ll mx=max(a[i],b[i-1]);
        cout<<b[i]-mx<<" ";
    }
  }
  cout<<'\n';    
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