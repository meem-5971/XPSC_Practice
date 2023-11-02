#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n,h,m;
        cin>>n>>h>>m;
         int ans=INT_MAX;
        for(int i=0;i<n;i++){
            int hh,mm;
            cin>>hh>>mm;
            int cnt=0;
           int x=h;
           int y=m;
           while(1){
            if(x==hh && y==mm ){
                break;
            }
            cnt++;
            y++;
            if(y==60){
                y=0;
                x++;
                if(x==24){
                    x=0;
                }
            }
           }
          ans=min(ans,cnt);
        }
        cout<<ans/60<<" "<<ans%60<<endl;
        return;
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