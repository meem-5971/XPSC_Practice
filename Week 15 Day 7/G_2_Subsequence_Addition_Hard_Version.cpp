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
       if(a[0]!=1){
        cout<<"NO"<<'\n';
        return;
       }
      

       ll sum=a[0];
       for(int i=1;i<n;i++){
      //  sum+=a[i];
        if(a[i]<=sum){
            sum+=a[i];
        }
        else{
            sum=-1;
            break;
        }
       }
       if(sum==-1) cout<<"NO\n";
       else cout<<"YES\n";
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