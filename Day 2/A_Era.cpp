#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    ll res=a[1]-1;
    ll id=res;
    int flag=0;
    //vector<int>v;
    for(int i=2;i<=n;i++){
         if(a[i]>id+i){
            ll x=a[i]-(id+i);
            id+=x;
            res+=x;
         }
       
    }
   cout<<res<<endl;
   }
    return 0;
}