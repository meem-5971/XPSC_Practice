#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
   long long int n;
    cin>>n;
  string s;
  cin>>s;
   int x=ceil(n/2);
   int cnt=0;
   vector<ll>v1;
   vector<ll>v2(n+1);
   ll sum=0;
    for(int i=0;i<n;i++){
    ll l=i;
    ll r=n-i-1;
       if(s[i]=='L'){
        if(r>l){
           cnt++;
       // int y=n-i;
        v1.push_back(r-l);

        sum+=r;
        }
         else{
        sum+=l;
       }
       }
      
    
    else{
         if(l>r){
            v1.push_back(l-r);
        cnt++;
        sum+=l;
       }
       else{
        sum+=r;
       }
    
   }
   
    }
   for(int i=cnt;i<=n;i++){
   
    v2[i]=sum;
   }
   sort(v1.begin(),v1.end(),greater<ll>());
   for(int i=cnt-1;i>=1;i--){
    sum-=v1.back();
    v1.pop_back();
    v2[i]=sum;
   }
   for(int i=1;i<=n;i++){
    cout<<v2[i]<<" ";
   }
   cout<<endl;
 
  //s.clear();
  
  }
    return 0;
}