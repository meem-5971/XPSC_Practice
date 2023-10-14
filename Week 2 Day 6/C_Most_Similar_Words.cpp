#include<bits/stdc++.h>
using namespace std;
long long int dif(string s1,string s2){
    long long res=0;
    for(int i=0;i<s1.size();i++){
        res+=abs(s1[i]-s2[i]);
    }
    return res;
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
      int x,y;
      cin>>x>>y;
      string s[x];
      for(int i=0;i<x;i++){
        cin>>s[i];
      }
      long long int ans=INT_MAX;
      for(int i=0;i<x-1;i++){
        for(int j=i+1;j<x;j++){
            ans=min(ans,dif(s[i],s[j]));
        }
      }
      cout<<ans<<endl;
   }
    return 0;
}