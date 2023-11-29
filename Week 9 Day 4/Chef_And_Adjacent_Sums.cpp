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
      sort(a,a+n);
      int sum=a[n-1]+a[n-2];
      bool flag=false;
      int j=n-1;
      int i=0;
      //sorted array ar 1st r last dik theke akta kore elements niye jog
      while(i<j){
        if(a[i]+a[j]>=sum){
          flag=true;
          cout<<"NO"<<'\n';
          return;
        }
        i++;
        j--;
      }
      if(!flag){
        cout<<"YES"<<'\n';
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