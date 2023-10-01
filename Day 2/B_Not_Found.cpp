#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   //cout<<s;
   int fq[26]={0};
   int n=s.size();
   for(int i=0;i<n;i++){
    int x=s[i]-97;
    fq[x]++;
   }
   char res;
   int flag=0;
   for(int i=0;i<26;i++){
    if(fq[i]==0){
        flag++;
        res=i+'a';
        break;
    }
   }
   if(flag==0) cout<<"None"<<endl;
   else cout<<res<<endl;

    return 0;
}