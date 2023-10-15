#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while (t--)
   {
    int n;
    cin>>n;
    vector<string>v(n);
    map<string,bool>visited;
    for(int i=0;i<n;i++){
        cin>>v[i];
        visited[v[i]]=true;
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=1;j<v[i].size();j++){
            string s1=v[i].substr(0,j);
          //  cout<<s1<<endl;
            string s2=v[i].substr(j,v[i].size()-1);
          //  cout<<s2<<endl;
            if(visited[s1] && visited[s2]){
                flag=true;
                break;
            }
        }
       if(flag){
            cout<<1;
        }
        else{
            cout<<0;
        }
        
    }
   
    cout<<endl; 
   }
   
    return 0;
}