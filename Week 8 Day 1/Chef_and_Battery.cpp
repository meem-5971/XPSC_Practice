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
    int cnt=0;
    while(n!=50){
        if(n>50){
            n=n-3;
            cnt++;
        }
        else{
            n=n+2;
            cnt++;
        }
    }
    cout<<cnt<<endl;
 }  
    return 0;
}