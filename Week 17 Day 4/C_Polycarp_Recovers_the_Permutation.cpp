#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      if (a[0] != n && a[n - 1] != n)
            cout << -1 << endl;
        else {
            for (int i = n - 1; i >= 0; i--)
                cout << a[i] << " ";
            cout << endl;
  } 
  }
    return 0;
}