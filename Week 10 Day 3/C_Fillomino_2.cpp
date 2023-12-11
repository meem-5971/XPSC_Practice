#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   int ans[n][n];
   memset(ans,0,sizeof(ans));
   int row,col,x;
   for(int i=0;i<n;i++){
    cin>>x;
    row=i;
    col=i;
    int y=x;
    while(x--){
        ans[row][col]=y;
        if(col !=0 && ans[row][col-1]==0){//left ay adjacent faka thakle agy sekhne value jabe
            col--;
        }
        else{
            row++;//naile niche value jabe
        }
    }
   }
   for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<'\n';
   }
    return 0;
}