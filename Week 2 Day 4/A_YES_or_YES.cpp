#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int q;
 cin>>q;
 while(q--){
    cin.ignore();
    string s;
    cin>>s;
    int i=0;
    if(s[i]=='Y'||s[i]=='y') i++;
    if(s[i]=='E'||s[i]=='e') i++;
    if(s[i]=='S'||s[i]=='s') i++;
    if(i==3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
 }

   
    return 0;
}