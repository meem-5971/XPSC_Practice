#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      set<ll>st;
      ll val=0;
      for(int i=0;i<n;i++){
        if(s[i]=='0'){
            st.insert(i);
        }
      }  
      for(int i=n-1;i>=0;i--){
        if(st.empty()){
            cout<<"-1 ";
        }
        else{
            auto it=st.rbegin();
           
           val+=(i-(*it));
           st.erase(*it);
           cout<<val<<' ';


        }
      }
      cout<<'\n';
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