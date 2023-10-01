#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   long long int x,y,z,sum;
   x=a*a;
   y=b*b;
   z=c*c;
   sum=x+y;
   if(sum<z) cout<<"Yes"<<endl;
   else cout<<"No"<<endl;
    return 0;
}