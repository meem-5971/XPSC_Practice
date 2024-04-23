#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n;   cin>>n;
   vector<pair<int,int>>v(n+1);
   for(int i=0;i<n;i++){
    cin>>v[i].first;
    v[i].second=i+1;
   }
   
   sort(v.begin(),v.end(),greater<pair<int,int>>());
  
   long long int sum=0;
   for(int i=1;i<n;i++){
    int x=v[i].first;
      sum+=((x*i)+1) ;
   }
   cout<<sum+1<<endl;
    for (int i = 0; i <n; i++) {
        cout << v[i].second<<" ";     
    }
   
    return 0;
}