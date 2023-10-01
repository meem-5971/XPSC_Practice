#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      char s[n];
      for(int i=0;i<n;i++){
        cin>>s[i];
      }
      int fq[27]={0};
      for(int i=0;i<n;i++){
        int c=s[i]-65;
        //cout<<c<<" ";
        if(fq[c]==0){
            fq[c]+=2;
        }
        else fq[c]++;

      }
      long long int sum=0;
      for(int i=0;i<27;i++){
        sum+=fq[i];
       // cout<<fq[i]<<" ";
      }
      cout<<sum<<endl;

   }
    return 0;
}