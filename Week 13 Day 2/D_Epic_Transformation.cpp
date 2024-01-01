#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      int a[n];
      map<int,int>mp;
      for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
      }  
      priority_queue<int>pq;
      for(auto i:mp){
        pq.push(i.second);
      }
      while(pq.size()>=2){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        a--;
        b--;
        if(a) pq.push(a);
        if(b) pq.push(b);    
      }
      if(pq.size()==0){
        cout<<0<<'\n';
      }
      else{
        cout<<pq.top()<<'\n';
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