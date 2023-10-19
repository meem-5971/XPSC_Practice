#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    int n;  cin>>n;
    int a[n];
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0) v1.push_back(a[i]);
        else v2.push_back(a[i]);
    }
    //sort(a,a+n);
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    if(v1.size()==0 || v2.size()==0){
        cout<<"YES"<<endl;
    }
    else{
      if(v2[0]>v1[0]){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }
   }
    return 0;
}