#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;
        cin>>n;
        map<int,int>mp;
        vector<int>a(2*n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        ll mx=0;
        for(int i=1;i<=(2*n);i++){
            ll total=0;
            for(auto j:mp){
                int other=i-j.first;
                if(other>=1 && mp.count(other)){
                    total+=min(j.second,mp[other]);
                }
            }
            total/=2;
            mx=max(mx,total);
        }
        cout<<mx<<'\n';
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