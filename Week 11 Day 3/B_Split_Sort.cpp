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
    int n;
    cin>>n;
     vector < ll > v(n+1,0), pos(n+1,0);
     for(int i=1;i<=n;i++){
        cin>>v[i];
        pos[v[i]]=i;
     }
     ll ans=0;
     for(int i=2;i<=n;i++){
        if(pos[i-1]>pos[i]){
            ans++;
        }
     }
     cout<<ans<<'\n';
  } 

    return 0;
}