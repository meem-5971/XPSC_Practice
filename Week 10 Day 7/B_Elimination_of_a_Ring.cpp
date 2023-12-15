#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
       vector<ll>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       } 
       set<ll>s;
       for(int i=0;i<n;i++){
        s.insert(a[i]);
       }
       if(n==1){
        cout<<1<<'\n';
       }
       else if(s.size()!=2){
        cout<<n<<'\n';
       }
       else{
        cout<<((n-2)/2)+2<<'\n';
       }
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