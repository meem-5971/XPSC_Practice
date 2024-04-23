#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n;
     cin>>n;
     vector<int>a(n);
     bool flag=false;
     for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            if(a[i]!=a[i-1]){
                flag=true;
            }
        }
     }
     for(int i=0;i<n;i++){
     
            if(a[i]!=a[0]){
                flag=true;
            }
        }
     
     if(flag==false){
        cout<<-1<<'\n';
        return;
     }
     ll mx=*max_element(a.begin(),a.end());
     for(int i=0;i<n;i++){
        if(a[i]==mx){
          if(i-1>=0 && a[i]>a[i-1]){
            cout<<i+1<<'\n';
            return;
          }
           if(i+1<n && a[i]>a[i+1]){
            cout<<i+1<<'\n';
            return;
          }
        }
     }
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