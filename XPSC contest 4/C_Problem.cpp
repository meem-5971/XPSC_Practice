#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n, m;
    cin>>n>>m;

    int d =abs(m-n);

    if (d%2 == 0) {
        int x = d/2;
        int y = (m+n)/2;
        if (x >= 0 && y >= 0) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
    } else {
        cout << "NO"<<endl;
    }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}