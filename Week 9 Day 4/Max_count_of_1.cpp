#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        int a=1;
        int b=0;
        int t1=1,t2=0;
        for(int i=0;i<n-1;i++){
        if(a^(s[i]-'0')==1){
           t1++;
           
        }
        a^=(s[i]-'0');
        }
         for(int i=0;i<n-1;i++){
        if(b^(s[i]-'0')==1){
           t2++;
           
        }
        b^=(s[i]-'0');
        }
       cout<<max(t1,t2)<<'\n';

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