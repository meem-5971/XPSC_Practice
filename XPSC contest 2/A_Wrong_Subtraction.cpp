#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 long long int n;
 int k;
 cin>>n;
 cin>>k;
 while(k--){
    if(n%10==0){
        n=n/10;
    }
    else{
        n=n-1;
    }
 }
   cout<<n<<endl;
    return 0;
}