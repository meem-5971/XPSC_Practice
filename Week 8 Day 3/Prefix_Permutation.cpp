#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n;
       cin>>n;
       vector<int>v(n);
       int p=1;
       for(int i=1;i<n;i+=2){
        v[i]=p;
        p+=2;
       } 
        p=2;
       for(int i=0;i<n;i+=2){
        v[i]=p;
        p+=2;
       } 
     if(n%2==0){
        for(auto u:v){
            cout<<u<<" ";
        }
        cout<<'\n';
     }
     else{
        cout<<-1<<'\n';
     }
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}