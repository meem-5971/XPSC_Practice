#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll a[n];

    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll l=0,r=INT_MAX,ans;
    while(l<=r){
        ll mid=l+(r-l)/2;
        ll lw=0,cnt=0;
        for(ll i=0;i<n;i++){
            if(a[i]-a[lw]<=(2*mid)) continue;
            lw=i;
            cnt++;
        }
        if(cnt<3){//mid dhore dhore 2 jon worker k kaj vag kore dicchi..remaining kaaj 3rd worker ar
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }

    }
    cout<<ans<<endl;
   }
    return 0;
}