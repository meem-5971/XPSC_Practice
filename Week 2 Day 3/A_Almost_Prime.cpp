#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
 vector<int>p;
  for(int i=2;i<=n;i++){
   
    int flag=0;
     for (int j = 2; j <=i / 2; j++) {
            if (i % j == 0) {
                flag++;
                break;
            }
        }
        if(flag==0)
        p.push_back(i);
  }
  int ans=0;
  for(int i=2;i<=n;i++){
    int cnt=0;
    for(int val:p){
        if(i%val==0){
            cnt++;
           //cout<<i<<" "<<cnt<<endl;
           
            
        }
        
    }
     if(cnt==2){
                ans++;
            }
  }
  cout<<ans<<endl;
    return 0;
}