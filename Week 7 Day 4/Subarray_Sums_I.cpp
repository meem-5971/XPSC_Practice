#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n,x;
   cin>>n>>x;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int j=0,i=0;
  ll sum=0;
  int cnt=0;
  while(j<n){
     sum+=a[j];
     while(sum>=x){
      if(sum==x) cnt++;
       sum-=a[i];
       i++;
     }
     j++;
  }
  cout<<cnt<<endl;
    return 0;
}