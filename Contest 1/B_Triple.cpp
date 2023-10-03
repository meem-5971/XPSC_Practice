#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
   sort(a,a+n);
   int x,flag=0;
     for(int i=0;i<n;i++){
      cout<<a[i]<<" ";
     if(a[i]==a[i+1] && a[i]==a[i+2]){
        x=a[i];
        flag++;
        break;
    }
    }
    if(flag==0) cout<<-1<<endl;
    else cout<<x<<endl;

   }
    return 0;
}
