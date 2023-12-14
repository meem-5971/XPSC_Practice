#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   vector<ll>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(),a.end());
   vector<ll>ans(n+2);
   int j=0;
   cout<<(n-1)/2<<'\n';
   for(int i=1;i<n;i+=2){
    
    ans[i]=a[j++];
   
   }
   for(int i=0;i<n;i+=2){
    
    ans[i]=a[j++];
    
   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<' ';
   }
    return 0;
}