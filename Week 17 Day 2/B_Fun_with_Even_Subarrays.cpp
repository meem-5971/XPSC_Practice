#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    int n;
        cin >> n;

        vector<int> a(n+1);
        for(int i=1; i<=n; i++)
            cin >> a[i];

        vector<int> b = a;
        reverse(b.begin()+1,b.end());//2nd index theke comparison

        int ans = 0, k= 1;

        while( k < n )
        {
            if( b[k+1] == b[1] ){
                k++;
                continue;
            }
            ans ++;
            k*= 2;//jkhne value mile nai tar 2k por theke new subarray
        }

        cout << ans << '\n';
  } 
    return 0;
}