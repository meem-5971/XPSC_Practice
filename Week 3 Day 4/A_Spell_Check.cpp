#include<bits/stdc++.h>
using namespace std;
int main(){
   int q;
   cin>>q;
   while(q--){
    cin.ignore();
    int n;
    cin>>n;
   
     string s;
     cin>>s;
     string a="Timur";
     sort(a.begin(),a.end());
     sort(s.begin(),s.end());
     if(s==a){
        cout<<"YES"<<endl;
    
     }
     else{
        cout<<"NO"<<endl;
     }
   
   }
    return 0;
}