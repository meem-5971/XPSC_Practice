#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n,s,r;
    cin>>n>>s>>r;
    vector<int>v;
    v.push_back(s-r);
    int x=r/(n-1);
    int rem=r%(n-1);
    for (int i = 0; i < n-1; i++)
    {
       if(rem>0){
        v.push_back(x+1);
        rem--;
    }
    else{
        v.push_back(x);
    }
    }
    
    
    for(int val:v){
        cout<<val<<" ";
    }
    cout<<endl;
   }
    return 0;
}