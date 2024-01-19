#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n, m, i, j, k;
    cin >> n >> m;
    ll a[n];
    for(i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    vector< ll > v;
    ll sum = 0;
    for(i = n-1; i >= 0; i--){
        sum+=a[i];
        v.push_back(sum);
    }
    ll x;
    for(i = 1; i <= m; i++){
        cin >> x;
        if(x > *(v.rbegin())) cout<<"-1";
        else{
        ll p = 1+lower_bound(v.begin(), v.end(), x) - v.begin();
        cout<<p;
        }
        cout<<endl;
    }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}