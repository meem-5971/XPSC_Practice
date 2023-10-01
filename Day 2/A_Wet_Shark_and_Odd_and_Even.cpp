#include<bits/stdc++.h>
using namespace std;
int main(){
  long long  int n;
   cin>>n;
   long long int a[n];
   long long sum=0;
   for(long long int i=0;i<n;i++){
    cin>>a[i];
   }
  long long int b[n];
   long long int j=0;
   for(long long int i=0;i<n;i++){
    if(a[i]%2==0){
        sum+=a[i];
    }
    else{
       b[j]=a[i];
       j++;
    }
   }
   sort(b,b+j);
   if(j%2==0){
    for(long long int i=0;i<j;i++){
    sum+=b[i];
    }
   }
   else{
     for(long long int i=j-1;i>=1;i--){
    sum+=b[i];
    }
   }
   cout<<sum<<endl;
    return 0;
}