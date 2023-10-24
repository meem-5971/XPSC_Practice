#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   map<string,int>mp;
   vector<string>v(t);
   int j=0;
   while(t--){
    cin.ignore();
    string s;
    cin>>s;
    v[j]=s;
    j++;
   }
    reverse(v.begin(),v.end());
    vector<string>q;

    for(string val:v){
     if(mp[val]==0){
            mp[val]++;
            q.push_back(val);
        }
   }
   
    for(string val:q){
    cout<<val.at(val.length()-2)<<val.at(val.length()-1);
   }
  
    return 0;
}