#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    vector<int>v(4);
    for(int i=0;i<4;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    ll sum=0;
    for(int i=1;i<4;i++){
        sum+=v[i];
    }
    if(v[0]>sum){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
   }
    return 0;
}