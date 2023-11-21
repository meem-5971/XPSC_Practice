#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=1,mx=1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
            if(cnt>mx){
                mx=cnt;
            }
        }
        else {
            cnt=1;
        }
    }
    cout<<n-mx<<'\n';
   }
    return 0;
}