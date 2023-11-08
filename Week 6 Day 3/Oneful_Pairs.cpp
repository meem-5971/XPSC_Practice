#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int a,b;
   cin>>a>>b;
   ll res=a*b;
   if((a+b+res)==111){
    cout<<"Yes"<<'\n';
   }
   else{
    cout<<"No"<<'\n';
   }
    return 0;
}