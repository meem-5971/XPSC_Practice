#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n,x;
    cin>>n>>x;
    if(n%x !=0){
        cout<<-1<<'\n';
        return;
    }
    if(n==x){
        cout<<n<<' ';
        for(int i=2;i<n;i++){
            cout<<i<<' ';
        }
        cout<<1<<'\n';
        return;
    }
    vector<ll>ans(n+1);
    ans[1]=x;
    ans[n]=1;
    for(int i=2;i<n;i++){
            ans[i]=i;
        }
    ans[x]=n;
    for(int i=2;i<n;i++){
      if(n%i==0 && i%x==0){
        swap(ans[i],ans[x]);
        x=i;
      }
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<' '; 
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