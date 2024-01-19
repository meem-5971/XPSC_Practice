#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n,s;
    cin>>n>>s;
    vector<ll>a(n+4);
    ll sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }    
    if(sum==s) cout<<0<<'\n';
    else if(sum<s) cout<<-1<<'\n';
    else{
        ll cnt=0;
        ll ans=0,k;
        for(int i=0;i<n;i++){
            ans+=a[i];
            cnt++;
            if(ans==s){
                k=i+1;
                break;
            }
        }
        ll mx=cnt;
        ll id=0;
        for(int i=k;i<n;i++){
            int j=i;
            while(j<n){
                if(a[j]==1){
                    break;
                }
                cnt++;
                mx=max(mx,cnt);
                j++;
            }
            i=j;
           // ans++;
            while(id<n){
                if(a[id]==1){
                    id++;
                    break;
                }
                cnt--;
                id++;
                mx=max(mx,cnt);
            }
        }
        cout<<n-mx<<'\n';
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