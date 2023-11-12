#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n+2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());

    ll sum=a[0];
     for(int i=1;i<n;i++){
        if(a[i]!=a[0]){
            sum+=a[i];
            break;
        }
    }
    cout<<sum<<endl;
   }
    return 0;
}