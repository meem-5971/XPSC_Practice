#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0;
        map<int,int>mp;
        for(int j=0;j<n;j++){
            int x=a[j];
          for(int i=0;i<31;i++){
            
            if(x&1){
                mp[i]++;
            }
            x=(x>>1);
        }
        }
       
        for(int i=30;i>=0;i--){
            int y=n-mp[i];
            if(k>=y){
                ans+=pow(2,i);
                k-=y;

            }
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