#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n,m;
   cin>>n>>m;
   int a[n];
   int b[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    cin>>b[i];
   }
   ll suma=0,sumb=0;
   for(int i=0;i<n;i++){
    suma+=a[i];
    sumb+=b[i];
   }
   if(sumb>m){
    cout<<-1<<'\n';
    return 0;
   }
   ll ans=suma-m;
   vector<int>c;
   for(int i=0;i<n;i++){
    c.push_back(a[i]-b[i]);
   }
   sort(c.begin(),c.end(),greater<int>());
   int i=0;
   ll sm=0;
   int cnt=0;
    while(sm<ans){
      sm+=c[i];
      i++;
      cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}