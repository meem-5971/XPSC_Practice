#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    string a="314159265358979323846264338327";
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==a[i]){
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt<<"\n";

   }
    return 0;
}