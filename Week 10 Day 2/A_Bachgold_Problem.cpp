#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;cin>>n;
    if(n%2==0){//even number k 2 ar summation kora jay
        cout<<n/2<<'\n';
        for(int i=0;i<n/2;i++){
            cout<<2<<" ";
        }
        cout<<'\n';
    }
    else{
        cout<<n/2<<'\n';
        for(int i=0;i<(n/2)-1;i++){//odd numbers (n-1)ta 2 r akt 3 ar summation
            cout<<2<<" ";
        }
        cout<<3<<'\n';
    }
    return 0;
}