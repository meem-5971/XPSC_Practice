#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>v;
bool pal(ll n){
   string temp=to_string(n); 
   string st=temp;
   reverse(st.begin(),st.end());
   if(st==temp) return true;
   else return false;
}  
void solve(){
    ll n;  cin>>n;
    ll a[n];
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }    
   
   ll x;
   ll cnt=n;

   for(int i=0;i<n;i++){
    
        for(int j=0;j<v.size();j++){
          x=a[i]^v[j];
         if(mp[x]>0){
           cnt+=mp[x]; 
         
         } 
        }
        
    }
    cout<<(cnt/2)<<endl;

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 for(int i=0;i<=32768;i++){
    if(pal(i)){
        v.push_back(i);
    }
   }
   int t;   cin>>t;

   while(t--){

    solve();
   }
    return 0;
}