#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
   int n;
   cin>>n;
   string s;
   cin>>s;
   string ans="";
   for(int i=n-1;i>=0;i--){
    if(i<2 || s[i]!='0'){
        int x=s[i]-'0';
        ans.push_back((char)(96+x));
       // continue;
    
    }
    else{
        int x=((s[i-2]-'0')*10+(s[i-1]-'0'));
         ans.push_back((char)(96+x));
         i-=2;
    }
   }
   reverse(ans.begin(),ans.end());
  cout<<ans;
   cout<<'\n';  
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}