#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum=0;
    int j=n-1;
    for(int i=0;i<j;i++){
        sum+=(a[j]-a[i]);
        j--;
    }
    cout<<sum<<endl;
  } 
    return 0;
}