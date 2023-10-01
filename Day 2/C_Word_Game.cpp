#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    map<string,int>fq;
    vector<string>s[3];
    for(int i=0;i<3;i++){
        s[i].resize(n);
        for(int j=0;j<n;j++){
            cin>>s[i][j];
            fq[s[i][j]]++;
        }
    }
    int res[3]={0};
    for(int i=0;i<3;i++){
        s[i].resize(n);
        for(int j=0;j<n;j++){
            if(fq[s[i][j]]==1){
                res[i]+=3;
            }
               else if(fq[s[i][j]]==2){
                res[i]+=1;
               }
        }
    }
  cout<<res[0]<<" "<<res[1]<<" "<<res[2];
  cout<<endl;
   }
    return 0;
}