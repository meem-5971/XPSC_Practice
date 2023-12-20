#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n;
    cin>>n;
    int a[2][n+1];
    a[0][1]=2*n;
    a[1][n]=2*n-1;
    int tmp=1;
    for(int i=1;i<=n;i++){
        a[i%2][i]=tmp;
        tmp++;
    } 
    tmp=(2*n)-2;
    for(int i=3;i<=n;i+=2){
        a[0][i]=tmp;
        a[1][i-1]=tmp-1;
        tmp-=2;
    }   
     for(int i=0;i<2;i++){
         for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
         }
         cout<<endl;
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