#include<bits/stdc++.h>
#define ll long long
using namespace std;
//L,W 2tai odd hole perimetre 4 diye divisible na  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int a,b;
    cin>>a>>b;
    if(a%2!=0 && b%2!=0){
        cout<<"NO"<<'\n';
    }
    else{
        cout<<"YES"<<'\n';
    }
   }
    return 0;
}