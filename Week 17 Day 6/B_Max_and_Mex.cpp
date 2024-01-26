#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n,k;
      cin>>n>>k;
      vector<ll>a(n);
      set<ll>s;
      for(int i=0;i<n;i++){
        cin>>a[i];
        s.insert(a[i]);
      } 
      sort(a.begin(),a.end());
      int miss=-1;
    for(int i=0;i<n;i++){
        if(a[i]!=i){ 
            miss=i;
            break;
        }
    }
    if(miss == -1) miss=n;//sob gulo nmbr e ache
    int add=(miss+a[n-1]+1)/2;
    if(miss == n || k==0){
        cout<<(int)s.size()+k<<"\n";//jdi miss==n hoy tahle prti operation ay mex ay new element add hbe
    }
    else{
        s.insert(add);
        cout<<(int)s.size()<<"\n";//akta element e bar bar add hbe mex ay
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