#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n,m,h,k;
    cin>>n>>m>>k>>h;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }  
    int cnt=0;
    for(int i=0;i<n;i++){
        b[i]=abs(h-a[i]);
        if(b[i]%k==0 && b[i]<=(k*(m-1)) && b[i]!=0){
            cnt++;
        }
    }
    cout<<cnt<<'\n';  
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