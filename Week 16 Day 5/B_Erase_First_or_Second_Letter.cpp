#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n;
    cin>>n;  
    string s;
    cin>>s;
    map<char,bool>visited;
    vector<char>ans;
    ll cnt=0;
    for(int i=0;i<n;i++){
    if(visited[s[i]]==false){
        ans.push_back(s[i]);
        visited[s[i]]=true;
    }
    cnt+=ans.size();
    }
    cout<<cnt<<'\n';  
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