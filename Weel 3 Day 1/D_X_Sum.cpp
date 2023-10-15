#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int r,c;
    cin>>r>>c;
    int cs[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
        cin>>cs[i][j];
        }
    }
    long long int sum,x,y;
    long long int ans=0;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum=cs[i][j];
        x=j-1;
       y=j+1;
       for(int k=i-1;k>=0;k--){
        if(x>=0){
           sum+=cs[k][x];
           x--;
        }
        if(y<c){
            sum+=cs[k][y];
            y++;
        }
       }
        x=j-1;
        y=j+1;
       for(int k=i+1;k<r;k++){
        if(x>=0){
           sum+=cs[k][x];
           x--;
        }
        if(y<c){
            sum+=cs[k][y];
            y++;
        }
       }
       ans=max(ans,sum);
        }
    }
    cout<<ans<<endl;
   }
    return 0;
}