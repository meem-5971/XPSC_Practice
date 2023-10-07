#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   int l=s.size();
   int cnt=0;
  while(l>1){
    long long int sum=0;
    for(int i=0;i<l;i++){
        sum+=(s[i]-'0');
    }
    s=to_string(sum);
    l=s.size();
    cnt++;
  }
  cout<<cnt<<endl;
    return 0;
}