#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll pair=0,single=0;
    int fq[26]={0};
      for(int i=0; i<n; i++)
        {
            fq[s[i]-97]++;
        }
        for(int i=0;i<26;i++){
           pair +=(fq[i]/2);//jsob character pair ay ache tara total koyta pair korbe
           single+=(fq[i]%2);//single character koyta ache
        }
        ll ans=0;
        ans+=(pair/k)*2;//k color diye pair korle total koyta character pawa jabe jara same pair ay thkbe mane palindrome korbe 
        single +=(pair-(pair/k)*k)*2;//era palindrome korbe na
        if(single>=k){
            ans++;//prti string ay akta extra character nite parbe
        }
        cout<<ans<<'\n';
   }
   


   
    return 0;
}