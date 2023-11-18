#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>cnt;
    for(int i=0;i<n;i++){
        int curr=a[i];
        for(int j=2;j*j<=curr;j++){
            while(curr%j ==0){
                cnt[j]++;
                curr/=j;
            }
        }
        if(curr>1){
            cnt[curr]++;
        }
    }
    bool flag=false;
    //sob gulo number ar total prime factor gulo jdi sobaik equally distribute kora jay tahle sob gulo number equal hbe

    for(auto u:cnt){
        if(u.second %n !=0){
            flag=true;
            break;
        }
    }
    if(flag) cout<<"NO"<<'\n';
    else cout<<"YES"<<'\n';
    
  } 
    return 0;
}