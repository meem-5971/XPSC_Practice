#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
    int n;  cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }  
    int cnt=0;
    int min=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(a[i]>min){
            cnt++;
        }
        else{
            min=a[i];
        }
    }
    cout<<cnt<<endl;  
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