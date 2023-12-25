#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
bool checkpalindorme(vector<ll>a,ll x){
    int n=a.size(), i=0,j=n-1;
     while(j>=i){
        	if (a[i] == x)
			i++;
		else if (a[j] == x)
			j--;
		else if (a[i] != a[j])
			return false;
		else
			i++, j--;
     }
     return true;
        
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
    bool flag=true;
    for(int i=0;i<n-1-i;i++){
        if(a[i]!=a[n-1-i]){
            flag=(checkpalindorme(a,a[i]) || checkpalindorme(a,a[n-1-i]));
            break;
        }
    }
 if(flag) cout<<"YES"<<'\n';
 else cout<<"NO"<<'\n';
   }
    return 0;
}