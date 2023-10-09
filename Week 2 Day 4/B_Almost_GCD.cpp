#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int mx=0;
   int ans;
   for(int i=2;i<=1000;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
     if(a[j]%i==0){
        cnt++;
     }
    }
    if(cnt>=mx) {
        mx=cnt;
        ans=i;
    }
   }
   cout<<ans<<endl;
    return 0;
}