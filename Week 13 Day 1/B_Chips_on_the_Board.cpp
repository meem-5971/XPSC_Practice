#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n;
        cin>>n;
        vector<ll>a(n);
        vector<ll>b(n);
        ll sa=0,sb=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sa+=a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
            sb+=b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        cout<<min(sa+b[0]*n, sb+a[0]*n)<<'\n';
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