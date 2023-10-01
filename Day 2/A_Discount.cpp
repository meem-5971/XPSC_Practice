#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
  
   cin>>a>>b;
  double x=(double) a+0.0;
  double y=(double) b+0.0;
   double res=(double)(y/x)*100.0;
 //  cout<<res*100<<endl;
   cout<<setprecision(20)<<(100.0 - res)<<endl;
    return 0;
}