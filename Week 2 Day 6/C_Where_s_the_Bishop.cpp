#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    char c[9][9];
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
          cin>>c[i][j];
        }
    }
    
    for(int i=1;i<=8;i++){
        for(int j=1;j<=8;j++){
          if(c[i][j]=='#' && c[i-1][j-1]=='#' && c[i-1][j+1]=='#' && c[i+1][j-1]=='#' && c[i+1][j+1]=='#'){
            cout<<i<<" "<<j<<endl;
            break;
          }
        }
    }
   }
    return 0;
}