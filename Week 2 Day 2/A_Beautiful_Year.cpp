#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   
   int fq[10]={0};
   string s;
   
   while(1){
    n++;
    int u=n/1000;
    int v=n/100%10;
    int w=n%10;
    int x=(n/10)%10;
   
     if(u != v && u != w && u!=x && v!=w && v!=x && w!=x){
       
        break;
     }
     

   }
   cout<<n<<endl;
    return 0;
}