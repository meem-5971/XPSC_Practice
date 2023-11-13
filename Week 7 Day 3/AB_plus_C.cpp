#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    ll n;
    cin>>n;
    if(n<2){//triplets pawa pssbl na
        cout<<-1<<'\n';
    }
    else if(n<=1000000){
        cout<<1<<" "<<1<<" "<<n-1<<'\n';
    }
    else{
        ll a=1000000;
        ll c=n%a;
        ll b;
        if(c==0){
            b=(n/a)-1;// let n=1000(limit), a,b,c->100(limit)
                      //a=100, c=0; b=(1000/100)-1=9; then c=100 hence, a*b+c=100*9+100=1000
            c=a;
        }
        else{
            b=n/a;
        }
        cout<<a<<" "<<b<<" "<<c<<'\n';
    }
   }
    return 0;
}