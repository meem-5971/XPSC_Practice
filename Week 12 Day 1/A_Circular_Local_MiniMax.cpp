#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(n%2==1){
         cout<<"NO"<<'\n';
         return;
        } 
        vector<ll>ans;
        for(int i=0,j=n/2;i<n/2;i++,j++){
            ans.push_back(a[i]);
            ans.push_back(a[j]);

        }
      //  ans.push_back(a[0]);
        //ans.push_back(a[1]);
        bool flag=false;
        for(int i=1;i<ans.size()-1;i++){
          if((ans[i]>ans[i-1]) && (ans[i]>ans[i+1])){
            continue;
          }
          else if((ans[i]<ans[i-1]) && (ans[i]<ans[i+1])) continue;
          else{
            flag=true;
            break;
          }
        }
        if(flag) cout<<"NO"<<'\n';
        else{
            cout<<"YES"<<'\n';
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<'\n';
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