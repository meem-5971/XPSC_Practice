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
    string s;
    cin>>s;
    if(s[0]==')' || s[s.size()-1]=='(') 
    cout<<"NO"<<'\n';
    else if(count(s.begin(),s.end(),'?')%2==0) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   }
    return 0;
}