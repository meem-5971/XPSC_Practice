#include<bits/stdc++.h>
#define ll long long
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
 
// find_by_order, order_of_key
template <typename T> using ordered_set1 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;  //ascending
template <typename T> using ordered_set2 = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;  //descending  
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll n;
   cin>>n;
   vector<ll>a(n);
   ordered_set1<int>s1;
   ordered_set2<int>s2;

   for(int i=0;i<n;i++){
    cin>>a[i];
    s1.insert(a[i]);
   }
   ll ans=0;
   for(int i=0;i<n;i++){
    s1.erase(a[i]);
    ans+=1LL*s1.order_of_key(a[i])*s2.order_of_key(a[i]);
    cout<<ans<<' ';
    s2.insert(a[i]);
   }
cout<<ans<<'\n';
    return 0;
}