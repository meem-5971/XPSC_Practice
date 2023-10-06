#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    cin.ignore();
    int n;
    cin>>n;
    char a[n];
    char b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]=='R'){
            if(b[i]!='R'){
                flag++;
                break;
            }
           
        }
        if(a[i]=='B' || a[i]=='G'){
            if(b[i]=='R'){
                flag++;
                break;
            }
        }
    }
     if(flag==0) cout<<"YES"<<endl;
     else cout<<"NO"<<endl;

   }
    return 0;
}