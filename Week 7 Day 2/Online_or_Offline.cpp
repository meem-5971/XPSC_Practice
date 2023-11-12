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
    double n,m;
    cin>>n>>m;
    float res= n-((10*n)/100);
    if(res==m){
        cout<<"EITHER"<<'\n';
    }
    else if(res>m){
        cout<<"DINING"<<'\n';
    }
    else{
        cout<<"ONLINE"<<'\n';
    }
  } 
    return 0;
}