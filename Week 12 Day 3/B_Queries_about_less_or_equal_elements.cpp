#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll a,b;
   cin>>a>>b;
   vector<ll>v1(a);
   vector<ll>v2(b);
   for(int i=0;i<a;i++){
    cin>>v1[i];
   }
   for(int i=0;i<b;i++){
    cin>>v2[i];
   }
   sort(v1.begin(),v1.end());
   
   for(int i=0;i<b;i++){
    cout<<upper_bound(v1.begin(),v1.end(),v2[i])-v1.begin()<<" ";
   }
   cout<<'\n';
   
   

    return 0;
}