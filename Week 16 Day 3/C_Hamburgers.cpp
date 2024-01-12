#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   string st;
   cin>>st;
   ll nb,ns,nc,pb,pn,pc,tk;
   cin>>nb>>ns>>nc>>pb>>pn>>pc>>tk;
   ll b=0,c=0,s=0;
   for(int i=0;i<st.size();i++){
    if(st[i]=='B') b++;
    else if(st[i]=='S') s++;
    else c++;
   }
   ll l=0,r=1e15,ans=0;
   while(l<=r){
    ll mid=(l+r)/2;

    ll x=max(0LL, mid*b-nb);
    ll y=max(0LL, mid*s-ns);
    ll z=max(0LL, mid*c-nc);
    ll cost= x*pb +y*pn +z*pc;
    if(cost>tk){
        r=mid-1;
    }
     else{
        ans=mid;
        l=mid+1;
     }
   }
  cout<<ans<<'\n';
    return 0;
}