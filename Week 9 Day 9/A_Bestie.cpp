#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n;
     cin>>n;
     vector<int>a(n+1);
     bool t=0;
     for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]==1){
            t=1;
        }
     }  
     int p=a[1];
     for(int i=2;i<=n;i++){
        p=__gcd(p,a[i]);//total array ar gcd
     } 
     if(t==1  || p==1){
        cout<<0<<'\n';
        return;
     }
      int ans=n;
        for(int i=n;i>=1;i--){
            int x=__gcd(i,a[i]);//index,element ar gcd
            int y=__gcd(x,p);//kno akta x jdi total gcd ar sathe gcd kore 1 hoy 
            if(y==1){
                ans=n-i+1;
                break;
            }
        }
     vector<int>g(n+1);
     for(int i=1;i<=n;i++){//index,element ar gcd
        g[i]=__gcd(i,a[i]);

     }
     reverse(g.begin()+1,g.end());
     for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int x1=__gcd(g[i],g[j]);//gcd vector ar prti 2ta element gcd 1 hote hbe
                if(x1==1){
                    ans=min(ans,i+j);
                }
            }
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