#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v;
        for(int i=0;i<q;i++){
            int x;
            cin>>x;
            if(v.empty() || v.back()>x){
                v.push_back(x);
            }
        }
        for(int i=0;i<n;i++){
            for(auto u: v){
                if(a[i]%(1<<u)==0){
                    u=u-1;
                    a[i]+=(1<<u);
                }
            }
        }
        for(auto u: a){
            cout<<u<<' ';
        }
        cout<<'\n';
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