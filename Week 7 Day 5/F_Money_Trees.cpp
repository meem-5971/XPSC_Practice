#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n,k;
        cin>>n>>k;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
         for(int i=0;i<n;i++){
            cin>>b[i];
        }
        ll sum=0;
        int ans=INT_MIN;
        int j=0,i=0;
        while(j<n){
            if(b[j-1]%b[j]==0) sum+=a[j];
            else{
                sum=a[j];//jeta(b array) divisible na agyr element diye sekhan theke new window start
                i=j;
            }
            while(sum>k){
                sum-=a[i];
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        cout<<ans<<'\n';

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t; cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}