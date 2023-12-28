#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      vector<ll>a(n+1);  
      vector<ll>b(n+1);  
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
      for(int i=0;i<n;i++){
        cin>>b[i];
      }
      bool flag=true;
      for(int i=0;i<n;i++){
        if(a[i]>b[i]){
            flag=false;
            break;
        }
       if(a[i]!=b[i] && b[(i+1)%n]+1<b[i]){
           flag=false;
           break;
       }
       
      }
      if(flag) cout<<"YES"<<'\n';
      else cout<<"NO"<<'\n';
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