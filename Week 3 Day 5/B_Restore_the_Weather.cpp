#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i;

    }
    sort(a.begin(),a.end());
    vector<ll>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b.begin(),b.end());

    vector<int>ans(n);
    for(int i=0;i<n;i++){
        ans[a[i].second]=b[i];
    }
  for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
 cout<<endl;
    
   }
    return 0;
}