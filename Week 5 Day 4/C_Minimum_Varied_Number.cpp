#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int s;
        cin>>s;
        if(s>=1 && s<=9){
            cout<<s<<endl;
           return;
        }
        vector<int>v;
        for(int i=9;i>0;i--){
            if(s==0) break;
            else if(s<i){
                v.push_back(s);
                break;
            }
            else{
            v.push_back(i);
            s-=i;
            }
           
        }
       for(int i=v.size()-1;i>=0;i--){
        cout<<v[i];
       }
        cout<<endl;
        return;
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