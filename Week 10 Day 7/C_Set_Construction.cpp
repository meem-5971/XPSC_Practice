#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int n;
    cin>>n;
        string a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        set<int>s[n+1];
        for(int i=1;i<=n;i++){
            s[i].insert(i);//prti row ar jnno tar nijer row number first ay insert
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='1'){
                    s[j+1].insert(i+1);// j set ar proper subset se set ay value insert
                }
            }
        }
        for(int i=1;i<=n;i++){
            cout<<s[i].size()<<" ";
            for(auto u:s[i]){
                cout<<u<<" ";
            }
            cout<<endl;
        }

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}