#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
bool solve(){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      vector<int>m,t;
      for(int i=0;i<n;i++){
       if(s[i]=='M'){
        m.push_back(i);
       }
       else{
        t.push_back(i);
       }
      }  
      if(t.size()!= 2*m.size()){
        return false;
      }
      for(int i=0;i<m.size();i++){
        if(t[i]>m[i] || m[i]>t[i+m.size()]){
            return false;
        }
      }
      return true;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
   if(solve()) cout<<"YES"<<'\n';
   else cout<<"NO"<<'\n';
   }
    return 0;
}