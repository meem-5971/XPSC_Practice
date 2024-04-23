#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    bool flag;
    if(a[1]%2==0){
      flag=false;
    }
    else{
        flag=true;
    }
    vector<int>b;
    vector<int>c; 
    for(int i=1;i<=n;i++){
     if(flag=true){
       if(i%2==0){
        b.push_back(a[i]);
      }
      else{
        c.push_back(a[i]);
      }
     }
     else{
        if(i%2==0){
        c.push_back(a[i]);
      }
      else{
        b.push_back(a[i]);
      }
     }
     
    }
    int f=0;
   
    
   
        for(int val:b){
      if(val%2 !=0){
        f++;
      }
        }
          for(int val:c){
      if(val%2 ==0){
        f++;
      }
        }
    
    if(f==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
    return 0;
}