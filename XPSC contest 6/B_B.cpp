#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n,m;
    cin>>n>>m;
    string s,k;
    cin>>s>>k;
    ll ans=INT_MAX;
    ll sum;
    for(int i=0;i<n;i++){
        sum=0;
      for(int j=0;j<m;j++){
        if(abs((k[j]-'0')-(s[j+i]-'0'))>5){
            int mn=min((s[j+i]-'0'),(k[j]-'0'));
            int mx=max((s[j+i]-'0'),(k[j]-'0'));
         //  cout<<mn<<" "<<mx<<endl;
           mn+=10;
           sum+=abs(mn-mx); 
           //cout<<sum<<' ';
        }
        else{
         sum+=abs((s[j+i]-'0')-(k[j]-'0'));
        }
        
       
      }
      ans=min(ans,sum);
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