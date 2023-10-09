#include<bits/stdc++.h>
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   int n;
   cin>>n;
   long long int a[n+1];
   long long int c[n+1];
   for(int i=1;i<=n;i++){
    cin>>a[i];
    c[i]=a[i];
   }
   sort(c+1,c+n+1);
   for(int i=1;i<=n;i++){
    a[i]=a[i-1]+a[i];
    c[i]=c[i-1]+c[i];
   }
   int q;
   cin>>q;
   while(q--){
   int t,l,r;
   cin>>t>>l>>r;
   
   if(t==1){
     if(l==0){
      cout<<a[r]<<endl;
     }
     else{
      cout<<a[r]-a[l-1]<<endl;
     }
   }
   if(t==2){
    if(l==0){
      cout<<c[r]<<endl;
     }
     else{
      cout<<c[r]-c[l-1]<<endl;
     }
   }
   }
    return 0;
}