#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while (t--)
  {
    int n;
    cin>>n;
    int a[n][n-1];
    int fq[n+1]={0};
    vector<int>v(n,0);
    for(int i=0;i<n;i++){

        for(int j=0;j<n-1;j++){
         cin>>a[i][j];
         if(j==0){
            fq[a[i][j]]++;
            
         }
        }
    }
    for(int i=1;i<=n;i++){
        if(fq[i]==n-1){
            v[0]=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
      if(a[i][0]!=v[0]){
        for(int j=0;j<n-1;j++){
            v[j+1]=a[i][j];
        }
      }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
  }
   
    return 0;
}