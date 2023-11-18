#include<bits/stdc++.h>
#define ll long long
using namespace std;
//a,b ar gcd hbe 2tar greatest divisors, gcd diye b k divide kore kore akta akta kore divisor ber krbo
void solve(){
     ll a,b;
     cin>>a>>b;
     bool flag=true;
     ll gcd=__gcd(a,b);
    while(b>1){
        //gcd 1 hoar agy b 1 hye gele bujhte hbe b ar sob prime divisors diye a divisible hye geche
        if(gcd==1){
            flag=false;
            break;
        }
        b/=gcd;
        gcd=__gcd(b,gcd);
        //new divisor r agyr gcd ar gcd jdi 1 hoy tar mane a te amn kno prime factor ache jeta b te nai
    }
  if(flag) cout<<"Yes"<<'\n';
  else cout<<"No"<<'\n'; 
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