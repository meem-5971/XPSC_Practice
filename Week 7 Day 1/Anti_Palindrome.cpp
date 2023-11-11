#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }    
    int cnto=0,cnte=0;
    for(auto l:mp){
        if(l.second%2==1){
            cnto++;
        }
        else{
            cnte++;
        }
    }
    if(cnto>1){//aktar besi odd char thkle already anti plaindrome
        cout<<0<<'\n';
    }
    else if(cnto==1){//akta odd
        if(cnte==0){
            cout<<2<<'\n';//even nai(eg:aaa), tahle 2ta char change krbo
        }
        else{
            cout<<1<<'\n';//even gular pair theke 1ta char change
        }
    }
    else{
        cout<<1<<'\n';//even gular pair theke 1ta char change
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