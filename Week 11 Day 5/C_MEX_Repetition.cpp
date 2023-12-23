#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n,k,b,missed,last;
        cin>>n>>k;
        vector < ll > v,t;
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
            v.push_back(b);
        }
        t = v;
        sort(t.begin(), t.end());
        missed = n;
        for(ll i = 0; i < n ; i++) {
            if(t[i] != i) {
                missed = i;
                break;
            }
        }
        ll bkp;
        for(ll i = 0 ; i < n ; i++) {
            bkp = v[i];
            v[i] = missed;
            missed = bkp;   
        }
        v.push_back(missed);
        
        last = (k-1)%(n+1);
        for(ll i = (n+1-last); i < (n+1) ; i++) {
            cout<<v[i]<<" ";
        }
        for(ll i = 0; i < (n-last); i++) {
            cout<<v[i]<<" ";
        }
        cout<<endl;
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