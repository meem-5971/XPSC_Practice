#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    for(int i=1;i<=n/2;i++){
        cout<<i<<" ";
    }
     for(int i=n;i>n/2;i--){
        cout<<i<<" ";
    }
  
  cout<<'\n';
  } 
    return 0;
}