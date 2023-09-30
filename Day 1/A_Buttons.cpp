#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   int cnt=0;
   if(a>=b){
     cnt+=a;
     a--;
     if(a>=b){
        cnt+=a;
     a--; 
     }
     else{
         cnt+=b;
     b--; 
     }
   }
   else{
    cnt+=b;
    b--;
     if(a>=b){
        cnt+=a;
     a--; 
     }
     else{
         cnt+=b;
     b--; 
     }
   }
   cout<<cnt<<endl;
    return 0;
}