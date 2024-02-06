#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    ll k[n+1],c[m+1];
    for(int i=1;i<=n;i++){
        cin>>k[i];
    }
    for(int i=1;i<=m;i++){
        cin>>c[i];
    }
   ll g[n];
    for(int i=1;i<=n;i++){
        g[i]=c[k[i]];
    }
    ll ans=0;
    sort(g+1,g+n+1);
    int j=1;
    for(int i=n;i>=1;i--){
        if(c[j]<g[i]){
            ans+=c[j];
            j++;
        }
        else{
            ans+=g[i];
        }
    }
cout<<ans<<'\n';
  } 
    return 0;
}