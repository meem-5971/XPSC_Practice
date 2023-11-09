#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
     int n;
     cin>>n;
     string s;
     cin>>s;
     int al=0,bb=0;
     for(int i=0;i<n;i++){
        if(s[i]=='A'&& s[i-1]!='B'){
            al++;
        }
        
        if(s[i]=='B' && s[i-1]=='B'){
            bb++;
        }
     } 
     cout<<al<<" "<<bb<<endl;  
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t; cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}