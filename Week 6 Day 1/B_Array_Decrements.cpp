#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int ans=0;
     for(int i=0;i<n;i++){
       ans=max(ans,a[i]-b[i]);
    }
    for(int i=0;i<n;i++){
       a[i]=max(0,a[i]-ans);
    }
    for(int i=0;i<n;i++){
       if(a[i]!=b[i]){
        cout<<"NO"<<endl;
        return;
       }
    }

   cout<<"YES"<<endl;


}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t; cin>>t;
 while(t--){
    solve();
 }  
    return 0;
}