#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
   vector<ll>a(n,0);//spending-budget of each friend
    for(int i=0;i<n;i++){
       int x;
       cin>>x;
       a[i]-=x;//spending
    }
     for(int i=0;i<n;i++){
       int x;
       cin>>x;
       a[i]+=x;//budget
    }
    sort(a.begin(),a.end(),greater<ll>());
    int ans=0;
    int l=0,r=n-1;
    while(l<r){
        if(a[l]>-1 and a[r]>-1){//2 joner e plus tai team
                ans++;
                l++,r--;
            }
            else if(a[l]<0 and a[r]<0){//2 joner e -,tai r team form hoa pssbl na, plus sob gulo sesh
                break;
            }
            else if(a[l]>-1){//1jon plus,1 jon minus
                if(a[l]>=abs(a[r])){//plus jdi minus ar absolute theke besi hoy tahle team hbe
                    ans++;
                    l++,r--;
                }
                else{//agyr minus ay jabe team korte
                    r--;
                }
            }
    }
    cout<<ans<<'\n';

   }
    return 0;
}