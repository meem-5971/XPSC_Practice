#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       vector<char>odd; 
       vector<char>even; 
       for(int i=0;i<n;i++){
        if(i%2==0){
            odd.push_back(s[i]);
        }
        else{
            even.push_back(s[i]);
        }
       }
       if(k%2==0) {//here k is even,tai jdi k range ar character k reverse kori tahle agyr odd even ay thaka chracters gulo mixed hye jabe r finally pura string takei swap kore sort kora jabe
        sort(s.begin(),s.end());
        cout<<s<<'\n';
        return;
       }
       //k range ay reverse korlew odd ar character odd position ay thakbe, even ar character even position ay thakbe
       sort(even.begin(),even.end());
       sort(odd.begin(),odd.end());
       ll t1=0,t2=0;
       for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<odd[t1++];
        }
        else{
            cout<<even[t2++];
        }
       }
    cout<<'\n';
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