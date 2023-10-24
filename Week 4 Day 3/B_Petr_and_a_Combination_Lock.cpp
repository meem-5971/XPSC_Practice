#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   bool flag=0;
   for(int i=0; i<(1 << n);i++){
    int sum=0;
    for(int j=0;j<n;j++){
        int mask=1 << j;
    if((i & mask)==0){// 0 mane jei element ta baad seta minus
        sum-=a[j];
    }
    else{
        sum+=a[j];
    }

    }
    if(sum%360==0){
        flag = 1;
            break;
    }
   }
   if(flag) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
    return 0;
}