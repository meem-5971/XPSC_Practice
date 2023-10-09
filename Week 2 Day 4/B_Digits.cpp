#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   int cnt=0;
   if(n==0){
    cout<<1<<endl;
   }
   else{
 while(n!=0){
    n=n/k;
    cnt++;
   }
   cout<<cnt<<endl;
   }
   
    return 0;
}