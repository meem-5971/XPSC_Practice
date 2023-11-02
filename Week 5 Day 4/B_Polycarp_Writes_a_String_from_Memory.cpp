#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        string st;
        cin>>st;
        int n=st.size();
        set<char>s;
        int count=1;
        for(int i=0;i<n;i++){
            s.insert(st[i]);
            if(s.size()>3){
             count++;
             s.clear();
             s.insert(st[i]);
            }
        }
        cout<<count<<endl;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}