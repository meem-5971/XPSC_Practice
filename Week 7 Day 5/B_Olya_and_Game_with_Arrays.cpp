#include<bits/stdc++.h>
#define ll long long
using namespace std;

  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    ll sum=0;
    ll x;
     vector<ll>v2; 
     ll mn1=INT_MAX,mn2=INT_MAX;
     //sob array ar min element k 1st array te shift krbo
    for(int i=0;i<n;i++){
        int mi;
        cin>>mi;
        vector<ll>v(mi);
        for(int j=0;j<mi;j++){
         cin>>v[j];
        }
        sort(v.begin(),v.end());
       sum+=v[1];//2nd min element ar sum
       mn1=min(mn1,v[0]);
       mn2=min(mn2,v[1]);
       
    }
    
    cout<<sum+mn1-mn2<<'\n';//v2[0] hcche 1st array te elememt shift hoar porer min element
  } 
    return 0;
}