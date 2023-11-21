#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int a,b;
    cin>>a>>b;
    int r=100-a;
    int p=200-(b*2);
    if(r>p) cout<<"SECOND"<<'\n';
    else if(r==p) cout<<"BOTH"<<'\n';
    else cout<<"FIRST"<<'\n';
   }
    return 0;
}