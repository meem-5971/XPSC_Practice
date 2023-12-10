#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n,m,d;
       cin>>n>>m>>d;
       vector<ll>a(n);
       for(int i=0;i<n;i++){
        cin>>a[i];
       } 
       priority_queue<ll,vector<ll>,greater<ll>>pq;//minheap
       ll sum=0;
       ll ans=0;
       for(int i=0;i<n;i++){
        if(a[i]<=0) continue;//negative value nibo na
        if(pq.size()<m){
            pq.push(a[i]);
            sum+=a[i];
        }
        else{
            if(pq.top()<a[i]){//pq ar size m ar equal or boro
              sum-=pq.top();//first small element k pop kore dei
            pq.pop();
            sum+=a[i];//new element k push kori
            pq.push(a[i]);
            }
        }
        ans = max(ans, sum-d*(i+1));//entertainment value ar formula : sum-d*(i+1)
       }
      cout<<ans<<'\n';
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