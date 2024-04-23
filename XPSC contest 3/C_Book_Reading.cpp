#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    ll n,m;
    cin>>n>>m;
    vector<int>cycle;
   for(ll i=m;;i+=m){//infinite loop
    cycle.push_back(i%10);
    if(i%10==0){//last digit 0 hole cycle break
        break;
    }
   }  
   ll sum=0,div,rem ,ans=0;
   for(int val:cycle){
    sum+=val;//cycle ar total value
   } 
   div=(n/m)/cycle.size();// koyta cycle pawa jabe
   rem=(n/m)%cycle.size();// remainder thakte pare cycle pawar por
   ans+=(div*sum);// jto gula cycle pabo, prti bar sum add hbe ans ay
   for(int i=0;i<rem;i++){
    ans+=cycle[i];//jdi remainder/ incomplete cycle thake, tahle j koyta remaining thake se koytar remaining digit add hbr]e
   } 
   cout<<ans<<endl;   
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}