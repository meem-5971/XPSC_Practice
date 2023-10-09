#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
     cin>>a[i];
   }
   int q;
   cin>>q;
   while(q--){
    int x,y;
    cin>>x>>y;
    long long int sum=0;
    for(int i=x;i<=y;i++){
        sum+=a[i];
    }
    cout<<sum<<endl;
   }
    return 0;
}