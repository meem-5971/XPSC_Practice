#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n,q;
       cin>>n>>q;
       vector<ll>a(n+3);
       for(int i=1;i<=n;i++){
        cin>>a[i];
       } 
       ll min_i=2;//2nd element min dhorchi
       ll max_i=1;//1st element max dhorchi
       ll ans=0;
       while(min_i<=n+1 && max_i<=n){
        while(max_i<=n && a[max_i]<a[min_i]){//min max thik nai elements gulor tai agya jacchi
            max_i++;
            min_i++;
        }
        while(min_i<=n && a[min_i]>a[min_i+1]){//akta min paichi r dekhbo tar por aro min ache kina
            min_i++;
        }
        if(max_i<=n && a[max_i]>a[min_i]){//min max ar condition true
            ans+=a[max_i]-a[min_i];
            max_i=min_i+1;//ar porer range theke abar newly min max dhorbo
            min_i=max_i+1;
        }
        else{
            break;
        }
       }
       cout<<ans<<'\n';
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