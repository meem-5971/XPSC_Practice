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
   vector<ll>ans(m);
   vector<ll>p;
   map<ll,ll>mp;
   for(int i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]=i+1;
   // ans.push_back(a[i]);
   }
    for(int i=0;i<m;i++){
    cin>>b[i];
   // ans.push_back(b[i]);
   }

   ll cnt=0;
   ll i=0;
   for(int j=0;j<b.size();j++){
   // i=0;
    while(i<n && a[i]<b[j]){
        i++;
        
    }
    // ans[j]=i;
         cout<<i<<' ';
   
   }
  
 
    return 0;
}