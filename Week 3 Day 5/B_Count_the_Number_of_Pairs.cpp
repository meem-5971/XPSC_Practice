#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
  int fqs[26]={0};
  int fqb[26]={0};
    for(int i=0;i<n;i++){
     if(s[i]>='a' && s[i]<='z'){
        fqs[s[i]-'a']++;
     }
     if(s[i]>='A' && s[i]<='Z'){
        fqb[s[i]-'A']++;
     }
    }
   int ans=0;
   for(int i=0;i<n;i++){
    int p=min(fqs[i],fqb[i]);
    ans+=p;
    fqs[i]-=p;
    fqb[i]-=p;
    int m=min(k,max(fqs[i],fqb[i])/2);
    ans+=m;
    k-=m;

   }
   cout<<ans<<endl;

   }
    return 0;
}