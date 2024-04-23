#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   int a[n+3];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int cnt=0;
   for(int i=1;i<=n;i++){
    if(a[i]==0){
        
        if(a[i-1]==1 && a[i+1]==1){
            
            cnt++;
            i+=2;
            
        }
    }
   }
     cout<<cnt<<endl;
    return 0;
}