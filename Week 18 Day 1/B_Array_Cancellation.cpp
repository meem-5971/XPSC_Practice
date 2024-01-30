#include<bits/stdc++.h>
#define ll long long
using namespace std;
 //max suffix sum 
void solve(){
      ll n;
      cin>>n;
      vector<ll>a(n);
      ll sum=0;
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<n;i++){
        sum=max(0LL,sum+a[i]);
      }
      cout<<sum<<'\n';

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