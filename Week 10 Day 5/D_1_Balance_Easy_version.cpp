#include<bits/stdc++.h>
#define ll long long
using namespace std;
   map<ll,ll> mex;
 
    map<ll,bool> visited;
  
void solve(){
        char c;
        cin>>c;
        ll n;
        cin>>n;
       
        if(c=='+'){
            visited[n]=true;
        }
        else{
            ll v=(mex[n])+n;
           while(visited[v]){
            mex[n]=v;
            v+=n;
           }
         cout<<v<<'\n';
        }

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int q;                  cin>>q;
 
  
    while(q--){
       solve();
        
    }
    return 0;
}