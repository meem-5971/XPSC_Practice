#include<bits/stdc++.h>
#define ll long long
using namespace std;  
void solve(){
     
     string s;
     cin>>s;
     int l=s.size();
     int zero=-1,one=-1;
     for(int i=0;i<l;i++){
        if(s[i]=='0'){
            zero=i;
            break;
        }
     } 
     for(int i=l-1;i>=0;i--){
        if(s[i]=='1'){
            one=i;
            break;
        }
     }
     if(zero==-1 && one==-1){
        cout<<l<<endl;
     } 
    else if(zero==-1){
        cout<<l-one<<endl;
    }
    else if(one==-1){
        cout<<zero+1<<endl;
    }
    else{
        cout<<abs(zero-one+1)<<endl;
    }
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