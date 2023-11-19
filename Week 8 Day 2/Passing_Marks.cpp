#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n,m;
       cin>>n>>m;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       } 
       sort(a,a+n,greater<int>());
       cout<<a[m-1]-1<<'\n';
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