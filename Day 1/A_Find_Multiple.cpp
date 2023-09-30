#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int res;
   int flag=0;
   for(int i=a;i<=b;i++){
       if(i%c==0){
        res=i;
        flag++;
        break;
       }
   }
   if(flag==0) cout<<-1<<endl;
   else cout<<res<<endl;
    return 0;
}