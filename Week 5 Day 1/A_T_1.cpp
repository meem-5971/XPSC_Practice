#include<bits/stdc++.h>
#define ll long long
using namespace std;

  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);

 while(1){
     int n,t;
    cin>>n>>t;
    if(n==0 && t==0){
        break;
    }
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
        sort(a,a+n);
        cout <<"CASE# "<<t<<":" << endl;
        while(t--){
             int x;
    cin >> x;
    int l = 0, r = n - 1;
    int ans = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (a[mid] == x)
        {
            ans = mid;
            break;
        }
        if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    
    if(ans==-1){
        cout<<x<<" not found"<<endl;
    }
    else{
       cout <<x<<" found at "<<ans+1<<endl;
    }
    
        }

 }  
    return 0;
}