#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   string s;
   cin>>s;
   int l=s.size();
   int fq[26]={0};
   for(int i=0;i<l;i++){
    fq[s[i]-'A']++;
   }
   int oddc=0;
   int oddi=-1;
   for(int i=0;i<26;i++){
    if(fq[i]%2 !=0){
        oddc++;
        oddi=i;//odd letter ar index track rakhtesi
    }
   }
   if(oddc>1){//odd letter aktar(one type) besi hbe na
    cout<<"NO SOLUTION"<<'\n';
    return 0;
   }
   //left
   for(int i=0;i<26;i++){
    if(fq[i]%2 ==0){//even letter gulor frequency half kore first half print
        int h=fq[i]/2;
        fq[i]-=h;
        while(h--){
        cout<<(char)('A'+i);
        }
    }
   }//middle
  if(oddi !=-1){
    while(fq[oddi]--){//odd letter print
        cout<<(char) (oddi+'A');
    }
  }
  for(int i=25;i>=0;i--){
    while(fq[i]>0){//baki even letter gula print backward theke
        fq[i]--;
        cout<<(char)('A'+i);
        
    }
  }
  cout<<'\n';
    return 0;
}