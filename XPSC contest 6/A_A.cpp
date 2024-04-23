#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    vector<int>v1(3);
    vector<int>v2(3);
    for(int i=0;i<3;i++){
        cin>>v1[i];
    }
    for(int i=0;i<3;i++){
        cin>>v2[i];
    }
    sort(v1.begin(),v1.end(),greater<int>());
    sort(v2.begin(),v2.end(),greater<int>());
    bool flag=false;
    int cnt=0;
    for(int i=0;i<3;i++){
        if(v1[i]>v2[i]){
            flag=true;
            break;
        }
        if(v1[i]<v2[i]){
            flag=false;
            break;
        }
        if(v1[i]==v2[i]){
            cnt++;
        }
    }
    if(cnt==3) cout<<"Tie"<<'\n';
    else{
        if(flag==true){
            cout<<"Alice"<<'\n';
        }
        else{
            cout<<"Bob"<<'\n';
        }
    }
  } 
    return 0;
}