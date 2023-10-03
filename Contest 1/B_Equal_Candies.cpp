#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mn=INT_MAX;
     for(int i=0;i<n;i++){
        mn=min(mn,a[i]);
    }
    int flag=0;
    long long int sum=0;
    if(n>1){
      for(int i=0;i<n;i++){
        sum+=(a[i]-mn);
        flag++;
    }  
    }
    if(flag==0) cout<<0<<endl;
    else cout<<sum<<endl;
     
   }
    return 0;
}