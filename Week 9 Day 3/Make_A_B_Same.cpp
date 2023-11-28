#include<bits/stdc++.h>
#define ll long long
using namespace std;  
void solve(){
   int n;
   cin>>n;
   vector<int>a(n);
   vector<int>b(n);
   int ca=0,cb=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1){
        ca++;
    }
   } 

   for(int i=0;i<n;i++){
    cin>>b[i];
    if(b[i]==1){
        cb++;
    }
   }
  if(ca>cb) cout<<"NO"<<'\n';// a te 1 besi thakle seta k komano pssbl na or kore
else if(ca==cb){//1 soman hole string 2ta soman hote hbe
    if(a==b) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}
else if(cb!=0 && ca==0){// a ar sob jdi 0 hoy kintu b te aktaw 1 thake tahle pssbl na
    cout<<"NO"<<'\n';
}
else{
    if(a[0]!=b[0] || a[n-1]!=b[n-1]){//1st,last element equal hote hbe
        cout<<"NO"<<'\n';
    }
    else{
        bool flag=false;
        for(int i=0;i<n;i++){
            if(a[i]==1 && a[i]!=b[i]){
                flag=true;
                break;
            }
        }
        if(flag) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
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