#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char s[6];
        for(int i=0;i<6;i++){
            cin>>s[i];
        }
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            int x=s[i]-'0';
           sum1+=x;
          // cout<<x;
        }
         for(int i=3;i<6;i++){
            int x=s[i]-'0';
           sum2+=x;
          // cout<<x;
        }
       if(sum1==sum2) cout<<"YES"<<endl;
       else 
       cout<<"NO"<<endl; 
        
    }
   
    return 0;
}