#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int x,y;
   cin>>x>>y;
   
   int cnt=0;
   while(x<= y){
    x*=2;
   cnt++;
   // i++;
   }
   cout<<cnt<<endl;
    return 0;
}