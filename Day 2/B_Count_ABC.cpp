#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   char s[n];
   for(int i=0;i<n;i++){
    cin>>s[i];
   }
   int cnt=0;
   for(int i=0;i<n;i++){
    if(s[i] =='A' && s[i+1]=='B' && s[i+2]=='C' ){
      cnt++;
    }
   }
   cout<<cnt<<endl;
    return 0;
}