#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n,x;
   cin>>n>>x;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   map<ll,int>mp;
   mp[0]++;//map ar first element 0 ache dhorbo
   ll sum=0;
   ll cnt=0;
   for(int i=0;i<n;i++){
       sum+=a[i];
       cnt+=mp[sum-x];//prti bar element plus korar por oi x ar soman hote jto lagbe toto value jto bar ache toto gula subarray pabo
       mp[sum]++;//new sum k map ay rakhbo
   }
   cout<<cnt<<endl;
    return 0;
}