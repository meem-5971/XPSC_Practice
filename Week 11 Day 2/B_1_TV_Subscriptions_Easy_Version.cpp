#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n,k,d;
    cin>>n>>k>>d;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    int ans=0;
    int cnt=0;
    for(int i=0;i<d;i++){
        if(mp[a[i]]==0){
            cnt++;
        }
        mp[a[i]]++;
    }
    ans=cnt;
    for(int i=d;i<n;i++){
        mp[a[i-d]]--;
        if(mp[a[i]]==0) cnt++;
        if(mp[a[i-d]]==0) cnt--;
        mp[a[i]]++;
        ans=min(ans,cnt);
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