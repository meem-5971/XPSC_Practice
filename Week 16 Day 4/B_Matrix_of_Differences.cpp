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
    ll n;
    cin>>n;
    ll x=1,y=n*n;
    vector<ll>a;
    for(int i=1;i<=n*n;i++){
        if(i%2==1){
            a.push_back(x);
            x++;
        }
        else{
            a.push_back(y);
            y--;
        }
    }
    ll t=0;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            for(int j=t;j<t+n;j++){
                cout<<a[j]<<' ';
            }
            cout<<'\n';
            t+=n;
        }
        else{
            for(int j=(t+n)-1;j>=t;j--){
                cout<<a[j]<<' ';
            }
            cout<<'\n';
            t+=n;
        }
    }
   }
    return 0;
}