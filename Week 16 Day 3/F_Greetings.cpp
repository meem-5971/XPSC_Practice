#include<bits/stdc++.h>
#define ll long long
using namespace std;
  #include<ext/pb_ds/assoc_container.hpp>
  #include<ext/pb_ds/tree_policy.hpp>
  using namespace __gnu_pbds;
   
  template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(){
      int n;
      cin>>n;
      vector<vector<int>>a(n,vector<int>(2));
      for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
      }  
      sort(a.begin(),a.end());
      ordered_set<ll>st;
      for(int i=0;i<n;i++){
        st.insert(a[i][1]);
      }
      ll ans=0;
      for (int i = 0; i < n; i++) {
        ans += st.order_of_key(a[i][1]);
        st.erase(a[i][1]);
    }
    cout<<ans<<'\n';
    
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}