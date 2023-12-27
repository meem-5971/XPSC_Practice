#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
      ll n;
      cin>>n;
      string s;
      cin>>s;
      vector<ll>v;
      bool two=false,three=false,four=false,sev=false;
      for(int i=0;i<n;i++){
        if(s[i]=='a'){
            v.push_back(i);
        }
      } 
       if(v.size()==0||v.size()==1)
    {
        cout<<"-1\n";return;
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i+1]-v[i]==1)//2ta a ar majhe 0ta char
        {
            two=true;
            break;
        }
        else if(v[i+1]-v[i]==2)//2ta a ar majhe 1ta char
        {
            three=true;
        }
         else if(v[i+1]-v[i]==3)//a ar majhe 2ta char
        {
            if(s[v[i]+1]!=s[v[i]+2])//majher char 2ta equal na
            {
                four=true;
            }
            else
            {//abbacca true dibe
                if(i+1<v.size()-1)//2tar besi a ache
                {
                    if(v[i+2]-v[i+1]==3)//last 2 ar majhew 2ta char
                    {
                        if(s[v[i+1]+1]==s[v[i+1]+2])//last 2 a ar majhe thaka char 2ta equal
                        {
                            if(s[v[i+1]+1]!=s[v[i]+1])//first 2 a ar majhe thaka char 2ta equal
                            sev=true;
                        }
                    }
                }
            }
        }
    } 
     if(two)cout<<"2\n";
    else if(three)cout<<"3\n";
    else if(four)cout<<"4\n";
    else if(sev)cout<<"7\n";
    else cout<<"-1\n";
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
   cin>>t;
   while(t--){
    solve();
   }
    return 0;
}