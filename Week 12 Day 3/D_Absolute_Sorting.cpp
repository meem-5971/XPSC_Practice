#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      vector<ll>a(n);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
      ll x= 0;
      for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])
        x=max(x,((a[i]+a[i+1]+1)/2));
      }
      for(int i=0;i<n;i++){
        a[i]=abs(x-a[i]);
      }
      for(int i=0;i<n-1;i++){
       if(a[i]>a[i+1]){
        x=-1;
        break;
       }
      }
      cout<<x<<'\n';

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