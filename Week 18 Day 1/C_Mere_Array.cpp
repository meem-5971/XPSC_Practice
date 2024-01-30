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
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    ll mn=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
        mn=min(a[i],mn);
    }
    sort(b.begin(),b.end());
    bool flag=true;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i] && a[i]%mn>0){
            flag=false;
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   }
    return 0;
}