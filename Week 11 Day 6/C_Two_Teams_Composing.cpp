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
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll fq[200007]={0};
    if(n==1){
        cout<<0<<'\n';
    }
    else{
        ll cnt_un=0;
        ll cnt_sm=0;
        for(int i=0;i<n;i++){
            if(fq[a[i]]==0){
                cnt_un++;
                fq[a[i]]++;
                cnt_sm=max(cnt_sm,fq[a[i]]);
            }
            else{
                fq[a[i]]++;
                cnt_sm=max(cnt_sm,fq[a[i]]);
            }
        }
        if(cnt_sm==cnt_un-1){//j element ta barbar ache seta unique ay akbr count hcche
            cout<<cnt_sm<<'\n';
        }
        else{
            ll v1=min(cnt_sm,cnt_un-1);
            ll v2=min(cnt_sm-1,cnt_un);
            cout<<max(v1,v2)<<'\n';
        }
    }
  } 
    return 0;
}