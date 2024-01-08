#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,m;
   cin>>n>>m;
   vector<ll>a(n);
   vector<ll>b(m);
   map<ll,ll>ma;
   map<ll,ll>mb;
   for(int i=0;i<n;i++){
    cin>>a[i];
   // ma[a[i]]++;
   }
   for(int i=0;i<m;i++){
    cin>>b[i];
    //mb[b[i]]++;
   }
   unsigned ll ans=0;
   ll i=0,j=0;
   while(i<n && j<m){
    ll f=0;
    ll t=b[j];
    while(j<m && b[j]==t){
        f++;
        j++;
    }
    while(i<n && a[i]<t){
        i++;
    }
    ll cnt=0;
    while(i<n && a[i]==t){
     cnt++;
     i++;
    }
    ans+=(cnt*f);
   }
   
   cout<<ans<<'\n';
    return 0;
}