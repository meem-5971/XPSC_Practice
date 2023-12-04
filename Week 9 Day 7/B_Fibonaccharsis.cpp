#include<bits/stdc++.h>
#define ll long long
using namespace std;
//30 ar besi fibonacchi number pssbl na..k max 30 hote parbe  
void solve(){
     ll n,k;
     cin>>n>>k;
     if(k>30){
        cout<<0<<'\n';
        return;
     }   
     ll ans=0;
     for(int i=0;i<=n;i++){
        int f=n;
        int s=i;
        bool flag=false;
        for(int j=1;j<=k-2;j++){
            int tmp=f-s;
            f=s;
            s=tmp;
            if(f>=s && s>-1){
                continue;
            }
            else{
                flag=true;
                break;
            }

        }
        if(!flag) ans++;
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