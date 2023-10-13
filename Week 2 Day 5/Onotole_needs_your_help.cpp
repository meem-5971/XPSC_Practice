#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(0);

long long int n;
 cin>>n;
 int a[n];
 long long int ans=0;
 for(int i=0;i<n;i++){
    cin>>a[i];
    ans^=a[i];
 }
  cout<<ans<<endl;
 
   
    return 0;
}