#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n;
     cin>>n;
     int a[n];
     int o=0,e=0;
     for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            e+=a[i];
        }
        else{
          o+=a[i];
        }
     }  
     if(e>o) cout<<"YES"<<'\n';
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