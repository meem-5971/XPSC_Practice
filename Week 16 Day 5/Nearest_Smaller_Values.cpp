#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n;
   cin>>n;
   vector<ll>a(n);
   for(int i=0;i<n;++i){
    cin>>a[i];
   }
   stack<ll>s;
   for(int i=0;i<n;++i){
    while(!s.empty() && a[s.top()]>=a[i]){
        s.pop();
    }
    if(s.empty()){
        cout<<0<<' ';
    }
    else{
        cout<<s.top()+1<<' ';
        
    }
    s.push(i);
   }
   cout<<'\n';
    return 0;
}