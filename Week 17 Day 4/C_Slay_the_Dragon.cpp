#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   vector<ll>a(n);
   ll sum=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i];
   }
   sort(a.begin(),a.end());
   int m;
   cin>>m;
   while(m--){
     ll x, y;
    cin >> x >> y;
    int i = lower_bound(a.begin(), a.end(), x) - a.begin();
    ll ans = 2e18;
    if (i > 0) ans = min(ans, (x - a[i - 1]) + max(0LL, y - sum + a[i - 1]));
    if (i < n) ans = min(ans, max(0LL, y - sum + a[i]));
    cout << ans << '\n';
   }
    return 0;
}