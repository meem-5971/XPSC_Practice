#include<bits/stdc++.h>
using namespace std;
int isPalindrome(string s){
  int l=0,r=4;
  while(l<r){
    if(s[l]!=s[r]) return 0;
    l++,r--;
  }
  return 1;
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int q;
   cin>>q;
   while(q--){
    cin.ignore();
    string s;
    cin>>s;
    int n;
    cin>>n;
    int h=n/60;
    int m=n%60;
    int ans=0;
    map<string,bool>visited;
    while(!visited[s]){
      ans+=(isPalindrome(s));
      visited[s]=true;

      int hh=((s[0]-'0')*10)+(s[1]-'0');
      int mm=((s[3]-'0')*10)+(s[4]-'0');

      mm+=m;
      if(mm>59){
        hh++;
      }
      mm%=60;

    hh+=h;
    hh%=24;

    s[0]=('0'+(hh/10));
    s[1]=('0'+(hh%10));
    s[3]=('0'+(mm/10));
    s[4]=('0'+(mm%10));



    }
    cout<<ans<<endl;
    
   }
    return 0;
}