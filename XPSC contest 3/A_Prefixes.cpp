#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n; cin>>n;
   string s;
   cin>>s;
   int s1=0;
   for(int i=0;i<n;i+=2){
      if(s[i]=='a' && s[i+1]=='a'){
        s1++;
        s[i+1]='b';
      }
     else if(s[i]=='b' && s[i+1]=='b'){
        s1++;
        s[i]='a';
      }
   }
  cout<<s1<<endl;
  cout<<s<<endl;
    return 0;
}