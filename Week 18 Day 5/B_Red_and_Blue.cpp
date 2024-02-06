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
    int n,mxa=0;
    cin>>n;
    int t=0;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        t+=a[i];
        mxa=max(mxa,t);
    }
     int m,mxb=0;
    cin>>m;
     t=0;
    vector<int>b(m);
     for(int i=0;i<m;i++){
        cin>>b[i];
        t+=b[i];
        mxb=max(mxb,t);
    }
    int ans=mxb+mxa;
    int f=0;
    cout<<max(ans,f)<<'\n';
  } 
    return 0;
}