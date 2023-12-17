#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     string s1;
     cin>>s1;
     string s2;
     cin>>s2;
      vector <pair<char, ll> > s, t;

        ll cnt = 1;
        for(ll i = 0; i < s1.size(); i++){
            if(s1[i] == s1[i + 1]) cnt++;
            else{
                s.push_back(make_pair(s1[i], cnt));
                cnt = 1;
            }
        }

        cnt = 1;
        for(ll i = 0; i < s2.size(); i++){
            if(s2[i] == s2[i + 1]) cnt++;
            else{
                t.push_back(make_pair(s2[i], cnt));
                cnt = 1;
            }
        }

        if(s.size() != t.size()){
            cout << "NO" << endl;
            return;
        }

        bool flag = true;
        for(ll i = 0; i < s.size(); i++){
            if(s[i].first == t[i].first && s[i].second <= t[i].second) continue;
            else {
                cout << "NO" << endl;
                flag = false;
                return;
            }
        }

        if(flag) cout << "YES" << endl;

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