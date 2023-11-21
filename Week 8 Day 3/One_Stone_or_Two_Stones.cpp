#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int d=min(x,y);
    x-=d, y-=d;
    if(d%2!=0){
        if(y>1){
            cout<<"CHEFINA"<<'\n';
        }
        else {
            cout<<"CHEF"<<'\n';
        }
    }
    else if(d%2 ==0){
        if(x>1){
            cout<<"CHEF"<<'\n';
        }
        else {
            cout<<"CHEFINA"<<'\n';
        }
    }
}   
    return 0;
}