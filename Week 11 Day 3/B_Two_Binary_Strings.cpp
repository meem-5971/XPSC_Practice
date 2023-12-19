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
    string a,b;
    cin>>a>>b;
    bool flag=false;
    for(ll i=0;i<a.size();i++){
        if((a[i]=='0' && b[i]=='0') && (a[i+1]=='1' && b[i+1]=='1')){
            flag=true;
            break;

        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
   }
    return 0;
}