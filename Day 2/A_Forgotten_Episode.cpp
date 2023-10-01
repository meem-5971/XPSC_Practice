#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int m=n-1;
   vector<int>v;
   for(int i=1;i<=m;i++){
    int x;
    cin>>x;
    v.push_back(x);
   }
  
   //int m=n-1;
   sort(v.begin(),v.end());
 
   int res;
   int j=1;
   for(int i=0;i<v.size()+1;i++){
      if(v[i]!=j){
         res=j;
         break;
      }
      j++;
    //  cout<<v[i]<<" ";
   }
   cout<<res<<endl;
    return 0;
}