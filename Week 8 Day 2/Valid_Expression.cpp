#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(int n,int x){
        if(x==0){
            cout<<'-';
            for(int i=0;i<n-1;i++){
            cout<<'*';
        }
        cout<<'\n';
        return;
        }
       else if(x>0){
           for(int i=1;i<=n-x+1;i++){
            cout<<'*';
           }
           for(int i=1;i<=x-1;i++){
            cout<<'+';
           }
           
           cout<<'\n';
           return;
        }
        else{
            for(int i=1;i<=n-abs(x)-1;i++){
            cout<<'*';
           }
           for(int i=1;i<=abs(x)+1;i++){
            cout<<'-';
           }
           cout<<'\n';
           return;
        }
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    ll n,x;
    cin>>n>>x;
    if (x < (1 - n) || x > (n + 1))
        {
            cout << -1 << endl;
        }
        else
        {
            solve(n, x);
        }
   }
    return 0;
}