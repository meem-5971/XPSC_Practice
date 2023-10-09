#include<bits/stdc++.h>
using namespace std;
int main(){
   string a,b;
   cin>>a>>b;
   int cnt=0;
   int l=a.size();
   for(int i=0;i<l;i++){
    if(a[i]!=b[i]){
        cnt++;
    }
   }
   cout<<cnt<<endl;
    return 0;
}