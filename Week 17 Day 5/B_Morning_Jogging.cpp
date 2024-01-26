#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n,m;
    cin>>n>>m;
   vector<int>v[n+4];
   vector<int>a[n+3];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        int x;
        cin>>x;
        v[i].push_back(x);
    }
   }
   for(int i=0;i<n;i++){
    sort(v[i].begin(),v[i].end());
   }
   for(int i=0;i<m;i++){
    int mn=INT_MAX;
    int id=-1;
    for(int j=0;j<n;j++){
        if(v[j][0]<mn){
            mn=v[j][0];
            id=j;
        }
    }
    for(int j=0;j<n;j++){
        if(j==id){
            a[j].push_back(v[j][0]);
            v[j].erase(v[j].begin());
        }
        else{
            a[j].push_back(v[j][v[j].size()-1]);
            v[j].pop_back();
        }
    }
   }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<' ';
    }
    cout<<'\n';
   }
   }
    return 0;
}