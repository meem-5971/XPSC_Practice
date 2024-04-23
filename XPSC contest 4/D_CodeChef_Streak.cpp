#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int mx1=INT_MIN;
    int mx2=INT_MIN;
    int cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cnt1=0;
        }
        else{
            cnt1++;
        }
        mx1=max(mx1,cnt1);
    }
    for(int i=0;i<n;i++){
        if(b[i]==0){
            cnt2=0;
        }
        else{
            cnt2++;
        }
        mx2=max(mx2,cnt2);
    }
   
    if(mx1>mx2){
        cout<<"Om"<<endl;
    }
    else if(mx1<mx2){
        cout<<"Addy"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}