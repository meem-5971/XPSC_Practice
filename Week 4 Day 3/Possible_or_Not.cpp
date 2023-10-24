#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n,b;
    cin>>n>>b;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if((a[i] & b)==b){
          ans &= a[i];
        }
       
    }
    if(ans==b){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
    return 0;
}