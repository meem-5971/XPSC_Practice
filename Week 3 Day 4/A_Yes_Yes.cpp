#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    int n=s.size();
    int flag=0;
    for(int i=0;i<n;i++){
        if(s[i]!='Y' && s[i]!='e' && s[i]!='s'){
            flag++;
            break;
        }
        if(s[i]=='Y'){
            if(s[i+1]!='e' && s[i+1]!='\0'){
            flag++;
          break;
            }
        }
         if(s[i]=='e'){
            if(s[i+1]!='s' && s[i+1]!='\0'){
            flag++;
          break;
            }
        }
         if(s[i]=='s'){
            if(s[i+1]!='Y' && s[i+1]!='\0'){
            flag++;
          break;
            }
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  } 
    return 0;
}