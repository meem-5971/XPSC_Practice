#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n;
       cin>>n;
       string s;
       cin>>s;
     bool flag=false;
     for(int i=0;i<n;i+=2){
        if(i==n-1) break;
        if(s[i]!=s[i+1]){
            if(flag==false){
              flag=true;
            }
           else{
            flag=false;
        }
        }
        
     } 
     if(flag==true) cout<<"Zlatan"<<'\n';
     else cout<<"Ramos"<<'\n';  
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