#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n,t;
   cin>>n>>t;
   vector<ll>a(n);
   vector<ll>b(t);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
    for(int i=0;i<t;i++){
    cin>>b[i];
   }
   multiset<int,greater<int>>s;//lower bound niye
   // upper bound nile -->
   //multiset<int>s;
   for(int i=0;i<n;i++){
    s.insert(a[i]);
   }
   for(int i=0;i<t;i++){
    
    auto it=s.lower_bound(b[i]);
    
    //auto it=s.upper_bound(b[i]);
    if(it==s.end()) cout<<-1<<'\n';//upper ay begin()
    else{
        cout<<*(it)<<'\n';//upper ay --it
        s.erase(it);
    }
   }

    return 0;
}