#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   map<char,int>mp;
   for(int i=0;i<n;i++){
    mp[s[i]]++;
   }
   for(char i='a';i<='z';i++){
    if(mp[i]>=k){
     mp[i]-=k;
     k=0;
    }
    else{
        k-=mp[i];
        mp[i]=0;
    }
   }
   string ans="";
   for(int i=n-1;i>=0;i--){
    if(mp[s[i]]!=0){
        ans+=s[i];
        mp[s[i]]--;
    }
   }
   reverse(ans.begin(),ans.end());
   cout<<ans<<'\n';
    return 0;
}