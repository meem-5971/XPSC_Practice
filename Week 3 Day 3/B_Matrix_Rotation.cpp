#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    vector<int>a(4);
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
     int maxpos=max_element(a.begin(),a.end())-a.begin();
     int minpos=min_element(a.begin(),a.end())-a.begin();

     if(maxpos+minpos==3){
        cout<<"YES\n";
     }
     else{
        cout<<"NO\n";
     }

   }
    return 0;
}