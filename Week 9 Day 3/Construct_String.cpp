#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n;
       cin>>n;
       string s;
       cin>>s;
       ll cnt=1;
       string ans="";
       //occurences jdi even times hoy tahle at least 2ta char thakbe
       // odd hole 1 ta char diyei occurence barche
       for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            cnt++;
        }
        else{
            if(cnt%2==1){
               ans+=s[i];
            }
            else{
                ans+=s[i];
                ans+=s[i];
            }
            cnt=1;
        }
       }
       cout<<ans<<'\n'; 
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