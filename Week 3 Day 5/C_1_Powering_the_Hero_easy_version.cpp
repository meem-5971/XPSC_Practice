#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
    cin>>v[i];
    }
    int ans=0;
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            if(pq.empty()) continue;
            else{
                ans+=pq.top();
                pq.pop();
            }
        }
        else{
            pq.push(v[i]);
        }
    }
    cout<<ans<<endl;
   }
    return 0;
}