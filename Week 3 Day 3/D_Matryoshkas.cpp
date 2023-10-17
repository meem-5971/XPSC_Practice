#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n;   cin>>n;
    int a[n+2];
    set<int>s;
    map<int,int>cnt;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt[a[i]]++;
        s.insert(a[i]);
        s.insert(a[i]+1);
        
    }
    
    int ans=0;
    int last=0;
    for(auto a:s){
        int x=cnt[a];
        ans+= max(0,x-last);
        last=x;
    

    }
    cout<<ans<<endl;
   }
    return 0;
}