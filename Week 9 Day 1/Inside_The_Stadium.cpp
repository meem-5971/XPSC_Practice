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
   float sum=0;
   int cnt=0;
   for(int i=0;i<n;i++){
    sum+=a[i];
    float num=i+1;
            if(sum==0)
                continue;
    float st=(sum/num);
    if(st*100 == 100){
        cnt++;
    }
   } 
   cout<<cnt<<'\n';    
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