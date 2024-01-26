#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       ll a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    ll n=s.size();
    ll c=0;
    for(int i=0;i<n;i++){
       if(s[i]=='1') b--;
       if(s[i]=='0') a--;
       if(s[i]=='?') c++;
    }
    if(c==0){
        for(int i=0;i<n/2;i++){
            if(s[i]!=s[n-i-1] ){
                cout<<-1<<'\n';
                return;
            }
           
        }
        if(a>0 || b>0){
            cout<<-1<<'\n';
                return;
        }
         cout<<s<<'\n';
            return;
    }  
    for(int i=0;i<n/2;i++){
        if(s[i]=='?' && s[n-i-1]!='?'){
            if(s[n-i-1]=='0' && a>0){
                s[i]='0';
                a--;
            }
            else if(s[n-i-1]=='0' && a==0){
                cout<<-1<<'\n';
                return;
            }
            else if(s[n-i-1]=='1' && b==0){
                cout<<-1<<'\n';
                return;
            }
            else if(s[n-i-1]=='1' && b>0){
              s[i]='1';
              b--;
            }
        }
        else if(s[i]!='?' && s[n-i-1]=='?'){
             if(s[i]=='0' && a>0){
                s[n-i-1]='0';
                a--;
            }
            else if(s[i]=='0' && a==0){
                cout<<-1<<'\n';
                return;
            }
            else if(s[i]=='1' && b==0){
                cout<<-1<<'\n';
                return;
            }
            else if(s[i]=='1' && b>0){
              s[n-i-1]='1';
              b--;
            }
        }
    }
    for(int i=0;i<n/2;i++){
        if(s[i]=='?' && s[n-i-1]=='?'){
            if(a>=2){
                s[i]='0';
                s[n-i-1]='0';
                a-=2;
            }
            else if(b>=2){
                s[i]='1';
                s[n-i-1]='1';
                b-=2;
            }
            else{
                cout<<-1<<'\n';
                return;
            }
        }
    }
    if(n%2==1 && s[n/2]=='?'){
        if(a>0){
            s[n/2]='0';
            a--;
        }
        else if(b>0){
            s[n/2]='1';
            b--;
        }
        else{
              cout<<-1<<'\n';
                return;
        }
    }
    if(a>0 || b>0){
          cout<<-1<<'\n';
                return;
    }
    for(int i=0;i<n/2;i++){
      if(s[i]!=s[n-i-1]){
          cout<<-1<<'\n';
                return;
      }
    }
    cout<<s<<'\n';
    return;
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