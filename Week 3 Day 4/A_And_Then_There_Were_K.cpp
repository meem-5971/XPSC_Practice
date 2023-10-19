#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int x;
    cin>>x;
    int cnt=0;
    while(x>1){
    //right shift kore kore 2 vaag kore jto prjnto jawa pssbl jacchi
      x>>=1;
      cnt++;
    }
    int p=1<<cnt;//2 multiply kore kore abae jto power niyechilam toto prjnto jacchi
    cout<<p-1<<endl;
   }
    return 0;
}