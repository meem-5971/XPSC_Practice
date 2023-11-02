#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      int a=n/3;
      int b=n%3;
      if(b==0){
        cout<<a<<" "<<a+1<<" "<<a-1<<endl;
      }
      else if(b==1){
        cout<<a<<" "<<a+2<<" "<<a-1<<endl;
      } 
      else{
        cout<<a+1<<" "<<a+2<<" "<<a-1<<endl;
      } 
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}