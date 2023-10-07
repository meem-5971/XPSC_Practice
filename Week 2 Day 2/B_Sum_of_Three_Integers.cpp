#include<bits/stdc++.h>
using namespace std;
int main(){
 int k,s;
 cin>>k>>s;
 vector<int>v;
 for(int i=0;i<=k;i++){
    for(int j=0;j<=k;j++){
       v.push_back(s-(i+j));
    }
 }  
 int cnt=0;
 
    for(int val:v){
    if(val>=0 && val<=k){
        cnt++;
    }
   // v.pop_back();
    }
 
 cout<<cnt<<endl;
    return 0;
}