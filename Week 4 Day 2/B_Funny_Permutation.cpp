#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n; cin>>n;
    vector<int>v(n+1);
   
    if(n==3){
        cout<<-1<<endl;
        continue;
    }
    else if(n==5){
        cout<<"5 4 1 2 3"<<endl;
            continue;
    }
     for(int i=1;i<=n;i++){
        v[i]=(n-i+1);
    }
   //reverse(v.begin(),v.end());
    if(n%2 !=0){
        swap(v[n/2],v[(n/2)+1]);
         for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
        cout<<endl;
    }
    else{
        for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    }
   }
    return 0;
}