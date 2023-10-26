#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        int n;  cin>>n;
        vector<int>v(n+2);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        int box=0;
        box^=v[0];
        int cnt=1;
         
        for(int i=1;i<n;i++){
            
        if(box>=v[i]){
            
            box^=v[i];

        }
        else{
            cnt++;
            box=v[i];
        }

        }
        cout<<cnt<<endl;


}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}