#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n,m;
      cin>>n>>m;
      if(n>m){
        cout<<"No"<<'\n';
        return;
      }
      vector<int>ans(n+1);
      int sum=0;
      if(n%2==0 && m%2==0){
        cout<<"Yes"<<'\n';
        for(int i=1;i<=n-2;i++){//last 2 value bad ay baki gula 1 
            ans[i]=1;
            sum++;
        }
        ans[n-1]=(m-sum)/2;//remaining m k 2 devide kore last 2ta nibo
        ans[n]=ans[n-1];
        
      } 
     else if(n%2==1 && m%2==0){
        cout<<"Yes"<<'\n';
        for(int i=1;i<=n-1;i++){//last 1 value bad ay baki gula 1 
            ans[i]=1;
            sum++;
        }
        ans[n]=m-sum;
        
      }
       else if(n%2==0 && m%2==1){//1ta value odd time theke jabe
        cout<<"No"<<'\n';
        return;
      } 
      else if(n%2==1 && m%2==1){
        cout<<"Yes"<<'\n';
        for(int i=1;i<=n-1;i++){//last 1 value bad ay baki gula 1 
            ans[i]=1;
            sum++;
        }
        ans[n]=m-sum;
        
      }
      for(int i=1;i<=n;i++){
        cout<<ans[i]<<' ';
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