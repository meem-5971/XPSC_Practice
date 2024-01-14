#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
bool Possible(vector<int> a,int n,int k){
    multiset<int> s;
    for(auto i:a){
        s.insert(i);
    }
 
    for(int i=1;i<=k;i++){
        if(s.empty())return false;
        int req=k-i+1;
        auto ii=s.upper_bound(req);
        if(ii==s.begin())return false;
        ii--;
 
        s.erase(ii);
        if(!s.empty()){
            ii=s.begin();
            ll v=(*ii);
            v+=(req);
            s.erase(ii);
            s.insert(v);
        }
    }
    return true;
}
 
 
int main(){
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
 
        int k;
        int l=0,r=n;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(Possible(a,n,mid)){
                k=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<k<<endl;
    }
    return 0;
}