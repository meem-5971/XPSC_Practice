#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n;
       cin>>n;
       if(n==1 || n==2){
        cout<<0<<'\n';
        return;
       } 
       int ans, even=n/2,odd=n/2;
       //n jdi even hoy tahle 1st odd bishop chara baki sob odd bishop diagonally asbe,
       //1st,last even bishop akbre last ay jabe ak step ay, baki even gula 2 step ay nicher dike jabe
       if(n%2==0){
        ans=(odd-1)+2+((even-2)*2);
       }
       // n odd hole total odd bishop N/2+1, 1st even bishop sudhu 1 step ay jabe baki sob even 2 step ay jabe
       //odd bishop 1 operation ay cholbe

       else{
        ans=(odd+1)+1+((even-1)*2);
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