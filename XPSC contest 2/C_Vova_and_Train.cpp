#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int q;
  cin>>q;
  while(q--){
   long long int p,n,l,r;
    cin>>p>>n>>l>>r;
    int cnt;
    cnt=(p/n)-((r/n) - (l-1)/n);
   
    cout<<cnt<<endl;
  } 
    return 0;
}