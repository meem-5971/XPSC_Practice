#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve(){
    int n;
    cin>>n;
    if(n%2==0){// equal num of odd and even values
    //1 ar sthe jkno kichur gcd korle 1 e hbe..2 ar sthe even number ar gcd korle 2 hbe
        for(int i=n;i>1;i--){
            cout<<i<<" ";//largest chaise tai
        }
        cout<<1<<endl;
    } 
    else{// unequal odd even values..tai sob gulo odd value bosar jnno even index pabe na
        cout<<-1<<endl;
    }   
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