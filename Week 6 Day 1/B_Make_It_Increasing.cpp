#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    bool flag=false;
    for(int i=n-2;i>=0;i--){
        if(a[i+1]==0){
            flag=true;
            break;
        }
        while(a[i]>=a[i+1]){
            cnt++;
            a[i]=a[i]/2;
        }
    }
    if(flag==true) cout<<"-1"<<endl;
    else cout<<cnt<<endl;
   }
    return 0;
}