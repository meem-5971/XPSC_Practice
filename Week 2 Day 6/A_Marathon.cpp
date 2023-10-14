#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int a[5];
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int x=a[0];
    int cnt=0;
    for(int i=1;i<4;i++){
        if(a[i]>x){
            cnt++;
        }
    }
    cout<<cnt<<endl;
   }
    return 0;
}