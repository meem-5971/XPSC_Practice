#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
ll gcd(ll a,ll b){
    return (__gcd(a,b));
}
ll lcm(ll a,ll b){
    return  ( (a/gcd(a,b))*b);
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  ll n,a,b,p,q;
  cin>>n>>a>>b>>p>>q;
  ll ans=0;
  ans+=((n/a)*p); //n/a divisor koyta ache ta dicche
  ans+=((n/b)*q); 
  ll sm;
  ll Lcm=lcm(a,b);//a,b ar lcm 2bar add hcche ans ay
  sm=n/Lcm;// lcm ar multiplier koyta
  ans-=(sm*(p+q));//lcm gula minus hcche
  ans+=(sm* max(p,q));// jar choco max se ans ay dd hbe lcm gular moddhe
  cout<<ans<<'\n';

    return 0;
}