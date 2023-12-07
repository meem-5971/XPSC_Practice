#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==0){
            cout<<1<<'\n';
            return;
        }
        ll ans=a;//1st joke diye sobr mood 1 korbe
        ans+=2*min(b,c); //b,c jokes alternatively bolte thakbe->0<->1 hote thkbe
        int r=abs(b-c)+d;//1st joke baad ay remaining jokes
        if(r>=a+1){
            ans+=a+1;//1st joke r last joke 1 bar shune sobai -1 hye jabe
        }
        else{
            ans+=r;//sob jokes shunate parbe
        }
        cout<<ans<<'\n';
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