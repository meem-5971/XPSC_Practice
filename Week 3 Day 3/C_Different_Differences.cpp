#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n,k;
    cin>>k>>n;
    int j=1;
    int d=1;
    for(int i=1;i<=k;i++){
       cout<<j<<" ";
       if(n-(j+d)>=(k-i-1)){
        j=j+d;
        d++;
       }
       else{
        j++;
       }
    }
    cout<<"\n";
   }
    return 0;
}