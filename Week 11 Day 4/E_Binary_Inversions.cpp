#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
ll count(vector<ll>a,int n){
        ll res=0,one=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                one++;
            }
            else{
                res+=one;
            }
        }
        return res;
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll ans=count(a,n);
    int id=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=1;
            id=i;
            break;
        }
    }
    ans=max(ans,count(a,n));
    if(id!=-1){
        a[id]=0;
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]==1){
            a[i]=0;
           // id=i;
            break;
        }
    }
    ans=max(ans,count(a,n));
    cout<<ans<<'\n';
   }
    return 0;
}