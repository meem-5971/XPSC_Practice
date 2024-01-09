#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
          int n, m, h;
        cin >> n >> m >> h;
        pair<int, ll> pi;
        int ans = 1;
        for(int i = 0; i < n; i++){
            vector<int> a(m);
            for(int j = 0; j < m; j++){
                cin >> a[j];
            }
            sort(a.begin(), a.end());
            int cnt = 0;
            long long pen = 0, sum = 0;
            for(int j = 0; j < m; j++){
                if (sum + a[j] > h) break;
                sum += a[j];
                pen += sum;
                cnt++;
            }
            if (i){
                if (make_pair(-cnt, pen) < pi) ans++;
            } else pi = {-cnt, pen};
        }
        cout << ans << '\n';
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
