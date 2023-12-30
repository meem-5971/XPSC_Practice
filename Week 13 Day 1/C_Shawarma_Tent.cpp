#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,x,y;
   cin>>n>>x>>y;
   pair<int,int>po[N];
   for(int i=1;i<=n;i++){
    cin>>po[i].first>>po[i].second;
   }
   int v[4]={0};
  int ans=0;
   for(int i=1;i<=n;i++){
    if(po[i].second>y){
        v[0]++;
    }
   }
   ans=max(v[0],ans);
   for(int i=1;i<=n;i++){
    if(po[i].first>x){
        v[1]++;
    }
   }
   ans=max(v[1],ans);
   for(int i=1;i<=n;i++){
    if(po[i].second<y){
        v[2]++;
    }
   }
   ans=max(v[2],ans);
   for(int i=1;i<=n;i++){
    if(po[i].first<x){
        v[3]++;
    }
   }
   ans=max(v[3],ans);

   cout<<ans<<'\n';
   if(ans==v[0]){
    cout<<x<<' '<<y+1<<'\n';
   }
   else if(ans==v[1]){
    cout<<x+1<<' '<<y<<'\n';
   }
   else if(ans==v[2]){
    cout<<x<<' '<<y-1<<'\n';
   }
   else {
    cout<<x-1<<' '<<y<<'\n';
   }

    return 0;
}