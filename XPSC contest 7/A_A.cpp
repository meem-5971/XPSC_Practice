#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int x;
       cin>>x;
       ll res;
       string s=to_string(x);
       int a=s[0]-'0';
     //  cout<<a<<'\n';
       res=(a-1)*10;
       
       for(int i=0;i<s.length();i++){
        res+=(i+1);
       }
       cout<<res<<'\n';

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