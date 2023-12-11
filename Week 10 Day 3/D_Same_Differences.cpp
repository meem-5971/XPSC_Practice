#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;
        cin>>n;
        int x;
        map<int,ll>mp;
        ll cnt=0;
        for(int i=0;i<n;i++){//a[i]-i=a[j]-j
            cin>>x;
            x-=i;//a[i]-i map ay koybar pair korte parbe seta count krbo
            cnt+=mp[x];
            mp[x]++;//tai map ar value pore increase krbo
        }
        cout<<cnt<<'\n';

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}