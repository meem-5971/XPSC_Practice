#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;
        cin>>n;
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(ans> n*n){
                    ans=2;
                }
                cout<<ans<<' ';
                ans+=2;
            }
            cout<<'\n';
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