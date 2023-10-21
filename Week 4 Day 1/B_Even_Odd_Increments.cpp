#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;   cin>>t;
  while(t--){
    ll n,q;
    cin>>n>>q;
     ll sum=0;
     int odd=0,even=0;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        if(a[i]%2==0) even++;
        else odd++;
    }
    ll x,y;
   
   
    while(q--){
    cin>>x>>y;
    if(x==0 &&  y%2==0){
        sum+=(even*y);
    }
    else if(x==0 && y%2!=0){
        sum+=(even*y);
        odd+=even;
        even=0;
    }
    else if(x==1 && y%2!=0){
         sum+=(odd*y);
        even+=odd;
        odd=0;
    }
    else if(x==1 && y%2==0){
        sum+=(odd*y);
    }
    cout<<sum<<endl;
    }
  } 
    return 0;
}