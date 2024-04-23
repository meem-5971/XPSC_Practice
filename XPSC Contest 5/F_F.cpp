#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t; cin>>t;
 while(t--){
    int n,k,l;
    cin>>n>>k>>l;
    vector<int>v;
    int cnt=0;
    
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
       if(y==l){
        cnt++;
        v.push_back(x);
        
       }
    }
    sort(v.begin(),v.end(),greater<int>());
    ll sum=0;
    if(v.size()<k){
        cout<<-1<<'\n';
        continue;
    }
    for(int i=0;i<k;i++){
        sum+=v[i];
    }
    cout<<sum<<endl;
 }  
    return 0;
}