#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool searchResult(vector<ll> arr, ll k){
    return count(arr.begin(), arr.end(), k);
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    s="#"+s;//1 based indexing kortesi
    vector<int>visited(n+1,0);

for(int i=1;i<=n;i++){
    if(s[i]=='1') visited[i]=2;
}
ll ans=0;
for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j+=i){
        if(visited[j]==0){//j element ta remove korte hbe
            visited[j]=1;//1ta element jeno 1bar ar besi multiplier hisebe count na hoy
            ans+=i;
        }
         else if(visited[j]==2){//jdi akta multipler remove na kora jay,tahle porer gulo remove kora laglew remove korte parbo na
                    break;
                }
    }
}
cout<<ans<<'\n';

   }
    return 0;
}