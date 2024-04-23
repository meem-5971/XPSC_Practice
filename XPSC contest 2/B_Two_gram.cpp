#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   string s;
   cin>>s;
   string st;

   int cnt=0,ans=0;
  
   for(int i=0;i<n-1;i++){
    cnt=0;
    // int k=0;
    for(int j=0;j<n-1;j++){
        if(s[i]==s[j] && s[i+1]==s[j+1]){
            cnt++;
            
        }
    }
    if(cnt>ans){
                ans=max(ans,cnt);
                st=string(1,s[i])+string(1,s[i+1]);
            }
   }

   cout<<st<<endl;
    return 0;
}