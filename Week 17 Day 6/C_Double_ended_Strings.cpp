#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    string a,b;
    cin>>a>>b;
    int n=a.size(),m=b.size();
    int ans=INT_MIN;
    for(int i=1;i<=min(n,m);i++){
        for(int j=0;j+i<=n;j++){
            for(int k=0;k+i<=m;k++){
                if(a.substr(j,i)==b.substr(k,i)){
                    ans=max(ans,i);
                }
            }
        }
    } 
    cout<<a.size()+b.size()-2*ans<<'\n';   
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin>>t;
 while(t--){
    solve();
 }  
    return 0;
}