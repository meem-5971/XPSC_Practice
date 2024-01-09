#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      vector<int>a(n);  
      vector<int>b(n);  
      for(int i=0;i<n;i++){
        cin>>a[i];
      }
       for(int i=0;i<n;i++){
        cin>>b[i];
      }
      int l=-1,r=-1,l1=-1,r1=-1;
      int t=0;
      for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            l=i;
            break;
            
        }
      }
      for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i;
            break;
            
        }
      }
      for(ll i=l;i>0;i--){
        if(b[i]>=b[i-1]){
            l1=i-1;
        }
         else {
                break;
            }
      }
      for(ll i=r;i<n-1;i++){
        if(b[i]<=b[i+1]){
            r1=i+1;
        }
         else {
                break;
            }
      }
      if(l1!=-1){
        cout<<l1+1<<' ';
      }
      else{
        cout<<l+1<<' ';
      }
      if(r1!=-1){
        cout<<r1+1<<'\n';
      }
      else{
        cout<<r+1<<'\n';
      }
       
     
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