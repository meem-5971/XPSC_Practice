#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int x;
    char c;
    cin>>x>>c;
    string s;
    cin>>s;
    string ss=s+s;
   
    int n=ss.size();
     vector<int>d(n);
   int i=0;
   int cnt=0;
   int ans=0;
   for(int i=0;i<n;i++){
   
   if(ss[i]==c){
    cnt=0;
   while(ss[i]!='g' && i<n){
       cnt++;
       i++;
   }
  ans=max(ans,cnt);
   }
   }
  // sort(d.begin(),d.end(),greater<int>());
   cout<<ans<<endl;

   }
    return 0;
}