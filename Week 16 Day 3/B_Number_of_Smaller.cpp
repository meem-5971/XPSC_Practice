#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,m;
      cin>>n>>m;
      vector<ll>a(n);  
      vector<ll>b(m);

      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
       for(int i=0;i<m;i++){
        cin>>b[i];
      }
      int j=0; 
      for(int i=0;i<m;i++){
        //j=0; 
          while(j<n && a[j]<b[i]){
           
            j++;
          }
           cout<<j<<' ';
      } 
      
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  solve(); 
    return 0;
}