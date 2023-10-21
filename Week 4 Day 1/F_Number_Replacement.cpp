#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
 int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        string s;
        cin>>s;
        int flg=0;
        map<int,char>mp;
        for(int i=0;i<n;i++){
            if(mp.count(a[i]) && mp[a[i]] != s[i]){
                flg++;
                break;
            }
            else if(mp.count(a[i])==0){
                mp[a[i]]=s[i];
            }
        }
       // cout<<"YES"<<"\n"
   if(flg==0) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
  } 
    return 0;
}