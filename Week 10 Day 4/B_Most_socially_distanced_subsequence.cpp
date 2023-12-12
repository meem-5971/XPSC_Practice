#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      vector<ll>a(n+1);
      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
      bool flag=false;//positive range diye start
      vector<ll>ans;
      ans.push_back(a[0]);
      for(int i=1;i<n;i++){
        if(flag==false && a[i]-a[i-1]>=0){
            continue;//positive range ar vetor positive value pacchi
        }
        else if(flag== false && a[i]-a[i-1]<0){
            flag=true;
            if(i!=1) ans.push_back(a[i-1]);
        }
        else if(flag==true && a[i]-a[i-1]>=0){
           flag=false;
           ans.push_back(a[i-1]);
        }
        else{
         continue;
        }

      }
      ans.push_back(a[n-1]);
      cout<<ans.size()<<'\n';
      for(auto u: ans){
        cout<<u<<" ";
      }
      cout<<'\n';
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