#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    
    
   ll cnt=0;
  string s;
   map<string,int>mp;
   for(int i=0;i<n;i++){ 
      cin>>s;
        string temp=s;
  for(char c='a';c<='k';c++){
    if(c!=s[0]){
      temp[0]=c;
      cnt+=mp[temp];
    }
  }
  temp=s;
      for(char c='a';c<='k';c++){
    if(c!=s[1]){
      temp[1]=c;
      cnt+=mp[temp];
    }
  }
  mp[s]++;
    }
   
   
   cout<<cnt<<endl;
   }
    return 0;
}