#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n,m;
    cin>>n>>m;
    ll b=m*6;
    ll r=b*6;
    if(r>=n){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
   }
    return 0;
}