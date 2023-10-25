#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       } 
       int count=0;
       map<int,bool>mp;
       for(int i=n-1;i>=0;i--){
        if(mp[a[i]]==false){
          count++;
          mp[a[i]]=true;
        }
        else if(mp[a[i]]==true){
            break;
        }
       } 
       cout<<abs(n-count)<<endl;

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