#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<string>st;
    for(int i=0;i<n-1;i++){
        string k="";
        k+=s[i];
        k+=s[i+1];
        st.insert(k);
    }
    cout<<st.size()<<endl;
   }
    return 0;
}