#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.size();
char s1[n+3];
int j=0;
for(int i=1;i<=n;i++){
   s1[i]=s[j];
   j++;
}
for(int i=1;i<=n;i++){
  if(i%2!=0){
    cout<<s1[i];
  }
}
  

    return 0;
}