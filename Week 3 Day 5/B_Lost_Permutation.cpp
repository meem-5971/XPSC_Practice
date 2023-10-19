#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n,s;
    cin>>n>>s;
    int a,m=INT_MIN;
    long long int sum=0;
    for(int i=0;i<n;i++){
     cin>>a;
     sum+=a;
     m=max(a,m);
    }
    int v=m;
    int x=(v*(v+1))/2;
    while(x-sum<s){
        v++;
        x=(v*(v+1))/2;
    }
    if(x-sum==s) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

   }
    return 0;
}