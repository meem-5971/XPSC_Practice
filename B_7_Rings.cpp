#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n,x;
    cin>>n>>x;
    ll res=n*x;
    string s;
    s=to_string(res);
    int cnt=0;
    bool flag=false;
    for(int i=0;i<s.size();i++){
        if(s[i]!='0'){
            cnt++;
            flag=true;
        }
        if(s[i]=='0' && flag==true){
            cnt++;
        }

    }
    if(cnt==5){
        cout<<"YES"<<endl;
    }  
    else{
        cout<<"NO"<<endl;
    }
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