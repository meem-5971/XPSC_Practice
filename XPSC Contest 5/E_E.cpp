#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;   cin>>t;
   while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ans=1;
    ll cnt=0;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||s[i]=='o'|| s[i]=='u'){
        v.push_back(i);//vowel ar index gula push
        }
    }
    
    for(ll i=0;i<v.size();i++){
        cnt++;//prti slice ay koyta vowel jacche tar count
        if(cnt==k){//slice ar vowel count k ar soman
            if(v.size()-1>i){ //last ar slice tar consonant matter kore na
            ans=(ans*(v[i+1]-v[i]+1-1))%mod;//2 slice ar majhkhaner consonant gular hisab
        }
        cnt=0;
        }
        
    }
    cout<<ans<<'\n';
   }
    return 0;
}