#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool isPrime(ll n)
{
    
    if (n <= 1)
        return false;
    for (ll i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}

 bool check_perfect_square(long long n){
    double sqrt_n = sqrt(n);
    if(sqrt_n == int(sqrt_n)){
        return true;
    }
    else{
        return false;
    }
} 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n;
   cin>>n;
   for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x==4){
        cout<<"YES"<<'\n';
    }
    else if(x%2==0){
        cout<<"NO"<<'\n';
    }
    else if(check_perfect_square(x) && isPrime((ll)sqrt(x))){
        cout<<"YES"<<'\n';
    }
    else{
        cout<<"NO"<<'\n';
    }
   }
    return 0;
}