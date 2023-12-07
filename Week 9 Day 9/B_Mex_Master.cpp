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
      int n;
    cin>>n;
    vector<int>a(n);
    int z=0,nz=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            z++;
        }
        else{
            nz++;
        }
    } 
       if(z==0){
        cout<<0<<'\n';
       }
       else{
        if(nz>=z-1){//zero ar majhe majhe non zero diye arrge korle element 2tar sum 0 hbe na
            cout<<0<<'\n';
        }
        else{
            int mx=*max_element(a.begin(),a.end());
            if(mx==1){
                cout<<2<<'\n';//jdi max element 1 hoy tar mane highest 2 element ar sum 1 hbe
            }
            else{//onno somoy 1 hbe
                cout<<1<<'\n';
            }
        }
       }
   }
    return 0;
}