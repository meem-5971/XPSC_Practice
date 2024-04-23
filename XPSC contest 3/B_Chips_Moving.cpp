#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   ll ans=0;
   vector<ll>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==1){
       ans++;
    }
   }
   
 cout<<min(ans,n-ans);
    return 0;
}