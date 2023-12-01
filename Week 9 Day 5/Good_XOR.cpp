#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      int n;
      cin>>n;
      int cnt0=0,cnt1=0;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
         if(a[i]==0){
            cnt0++;
        }
        if(a[i]==1){
            cnt1++;
        }
      }
       if(n%2!=0 || cnt1==0){
        cout<<"-1"<<endl;
        return ;
    }else if(cnt1==cnt0){
        cout<<"0"<<endl;
    }else if(cnt1<cnt0){
        cout<<(cnt0-cnt1)/2<<endl;
    }else if(cnt0<cnt1){
        if(n==2){
            cout<<"-1"<<endl;
            return ;
        }
        else {
            int d=cnt1-cnt0;
            if(d%4==0){
                cout<<d/4<<'\n';
            }
            else{
                cout<<(d/4)+2<<'\n';
            }
         } }
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