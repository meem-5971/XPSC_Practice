#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
  int flag=0;
   for(int i=0;i<=c;i++){
     int s1=(c-(a*i));
     if(s1<0) {
       flag++;
       break;
     }
     if(s1%b==0){
        flag=0;
        break;
     }
   }
   if(flag==0 ){
    cout<<"Yes"<<endl;
   }
   else{
    cout<<"No"<<endl;
   }
    return 0;
}
