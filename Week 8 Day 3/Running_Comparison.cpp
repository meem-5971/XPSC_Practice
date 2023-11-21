#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    ll cnt=0;
    for(int i=0;i<n;i++){
       if(a[i]>2*b[i]||b[i]>2*a[i]){
	            continue;
	        }
	        else{
	            cnt++;
	        }
    }
    cout<<cnt<<'\n';
   }
    return 0;
}