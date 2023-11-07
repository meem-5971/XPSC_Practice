#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
   string w;
   int p;
   cin>>w>>p;
   int score=0;
   map<int,vector<int>>mp;
   for(int i=0;i<w.size();i++){
    score +=(w[i]-'a'+1);// sobar position ar sum
    mp[w[i]-'a'+1].push_back(i);//prti ta char kon kon index ay ache ta store
   }     
   while(score>p){
    for(int i=26;i>=0;i--){//max ta agy minus krbo tai pichon theke loop
        for(auto it:mp[i]){
            score-=i;//prti ta char ar pos ar value minus hcche
            w[it]='.';// j char gulo minus hcche..se gulo k . diye replace
            if(score<=p){
                break;
            }
        }
          if(score<=p){
                break;
            }
    }
   }
   string ans="";
   for(auto it:w){
    if(it!='.'){
        ans+=it;
    }
   }
   cout<<ans<<endl;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t; cin>>t;
 while(t--){
    solve();
 }
   
    return 0;
}