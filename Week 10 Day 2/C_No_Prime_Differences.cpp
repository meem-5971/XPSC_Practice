#include<bits/stdc++.h>
#define ll long long
using namespace std;
 bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
 
   
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
} 
void solve(){
     ll n,m;
     cin>>n>>m;
    bool flag= isPrime(m);
    ll a[n][m];
    int val=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j]=val;
            val++;
        }
       
    }
    for(int i=1;i<n;i+=2){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
    }
     for(int i=0;i<n;i+=2){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<' ';
        }
        cout<<'\n';
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