#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int x=a[i];
                int y=a[j];
                int z=a[k];
                if((z-y)==(y-x)){
                  flag=true;
                  break;
                }
            }
        }
    }
    if(flag==true) cout<<"No"<<'\n';
    else cout<<"Yes"<<'\n';
  } 
    return 0;
}