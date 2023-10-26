#include<bits/stdc++.h>
#define ll long long
using namespace std;  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n,m,k;
   cin>>n>>m>>k;
   int a[1000];
   for(int i=0;i<m+1;i++){
    cin>>a[i];
   }
   int f=0;
   for(int i=0;i<m;i++){
    int cnt=0;
    for(int j=0;j<n;j++){
       if(((1<<j) & a[i]) != ((1<<j) & a[m]) ){
        cnt++;
       }
    }
    if(cnt<=k){
        f++;
    }
   }
   cout<<f<<endl;
    return 0;
}