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
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
   if(s[0]=='0'){
    k--;
    s[0]='1';
   }
   cout<<s;
   if(k>0){
    for(int i=0;i<k;i++){
        cout<<0;
    }
   }
   cout<<'\n';
  } 
    return 0;
}