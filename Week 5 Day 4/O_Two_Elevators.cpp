#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int ans1=abs(a-1);
    int ans2=abs(b-c)+(c-1);
    if(ans1==ans2) cout<<3<<endl;
    else if(ans2>ans1) cout<<1<<endl;
    else cout<<2<<endl;
    return;

}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
int t;  cin>>t;
while(t--){
    solve();
} 
    return 0;
}