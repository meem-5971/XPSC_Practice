#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      string s;
      cin>>s;
      ll len=0,sorted=0,unsorted=INT_MAX;
      bool flag=false;
      for(ll i=0;i<(ll)s.size();i++){
        if(s[i]=='+'){
            len++;
        }
        else if(s[i]=='-'){
            len--;
        }
        else if(s[i]=='1'){
            sorted=len;
        }
        else if(s[i]=='0'){
            if(unsorted==INT_MAX){
                unsorted=len;//first zero 
            }
        }
        if(sorted>len){
            sorted=len;
        }
        if(len<unsorted){
            unsorted=INT_MAX;
        }
        //cond 1: pura array ta sorted bt 0 ache
        //cond 2; unsorted ar length boro bt 1 ache
        //cond 2; length 2 bt 0 ache(mane unsorted)
        if((s[i]=='0' && len==sorted) || (s[i]=='1' && unsorted<=len) || (s[i]=='0' && len<2)){
            flag=true;
            break;
        }
      } 
      if(flag) cout<<"NO"<<'\n';
      else cout<<"YES"<<'\n'; 
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