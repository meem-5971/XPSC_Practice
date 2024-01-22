#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int r,c;
      cin>>r>>c;
      char a[r][c];
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
      }
      for(int i=0;i<c;i++){
        int last=r-1;
       for(int j=r-1;j>=0;j--){
          if(a[j][i]=='o'){
            last=j-1;
          }
          else if(a[j][i]=='*'){
            swap(a[j][i],a[last][i]);
            last--;
          }
       } 
      }
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j];
        }
        cout<<'\n';
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