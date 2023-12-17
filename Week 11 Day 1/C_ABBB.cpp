#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       string s;
       cin>>s;
       ll n=s.size();
       for(int i=0;i<n;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            s.erase(s.begin()+i+1);
            s.erase(s.begin()+i);
            i-=2;

        }
        else if(s[i]=='B' && s[i+1]=='B'){
             s.erase(s.begin()+i+1);
            s.erase(s.begin()+i);
            i-=2;
        }
       }
       cout<<s.size()<<'\n'; 
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