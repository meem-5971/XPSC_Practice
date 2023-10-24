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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
     for(int i=0;i<n;i++){
        while(a[i]%2==0){
            count++;
            a[i]=a[i]/2;
        }
    }
    vector<ll>v;
    int j,k;
    for(int i=2;i<=n;i++){
        j=i;
        k=0;
        while(j%2==0){
            k++;
            j/=2;
        }
        if(k>0){
            v.push_back(k);
        }
    }
    sort(v.begin(),v.end());
    int l=v.size();
    int ans=0;
    for(int i=l-1;i>=0 && count<n ;i--){
        count+=v[i];
        ans++;
    }
     if(count<n){
        cout<<-1<<endl;
     }
     else{
        cout<<ans<<endl;
     }
       }
    return 0;
}