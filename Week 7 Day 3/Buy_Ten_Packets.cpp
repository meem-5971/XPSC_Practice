#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int x,y;
    cin>>x>>y;
    cout<<min(5*x, 2*y+x)<<'\n';
  } 
    return 0;
}