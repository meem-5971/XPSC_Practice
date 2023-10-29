#include<bits/stdc++.h>
#define ll long long
using namespace std;

  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
    vector<int>a(n);
    
   for(int i=0;i<n;i++){
    cin>>a[i];
    //mp[a[i]]++;
   }
   int m;
   cin>>m;
   vector<int>v(m);
   for(int i=0;i<n;i++){
    cin>>v[i];
   auto ub=upper_bound(a.begin(),a.end(),v[i]);   
   auto lb=lower_bound(a.begin(),a.end(),v[i]);
   if(lb==a.begin()){
    cout<<"X"<<" ";
   }
   else{
    lb--;
    cout<<*lb<<" ";
   }
  if(ub==a.end()){
    cout<<"X"<<endl;
  }
  else{
    cout<<*ub<<endl;
  }
   
   }
    return 0;
}