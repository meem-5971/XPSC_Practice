#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n,m;
      cin>>n>>m;
      vector<ll>a(n+m);  
     
      for(int i=0;i<(n+m);i++){
        cin>>a[i];
      } 
      
      sort(a.begin(),a.end()-1);
      reverse(a.begin(),a.end());
      ll sum=0;
      for(int i=0;i<n;i++){
       
            sum+=a[i];
        
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