#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n;
       cin>>n;
     vector<ll>a(n);
     vector<ll>b(n);
       

       for(ll i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
       } 
       sort(b.begin(),b.end());
       int cnt=0;
       ll mn=INT_MAX;
       if(a==b){
        for(ll i=n-1;i>0;i--){
            mn=min(mn,((a[i]-a[i-1])/2LL)+1LL);
        }
        cout<<mn<<'\n';
       }
       else{
        cout<<0<<'\n';
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