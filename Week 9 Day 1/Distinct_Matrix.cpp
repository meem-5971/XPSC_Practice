#include<bits/stdc++.h>
#define ll long long
using namespace std;  
void solve(){
      int n;
      cin>>n;
      if(n<=2){
        cout<<-1<<'\n';
      }  
       else if (n == 3){
            cout<<"100\n010\n111"<<endl;
        }
      else{
        for(int i=0;i<n;i++){
            cout<<1;
            
            int cnt = (i / 2) + 1 ;
            for(int j = 1 ; j < n ; j++){
                if(i % 2 == 0){
                    if( j >= n - cnt ){
                        cout<<"1";
                        //cnt++;
                    }else{
                        cout<<"0";
                        //cnt++;
                    }
                }else{
                    if( j <= cnt){
                        cout<<"1";
                        //cnt++;
                    }else{
                        cout<<"0";
                        //cnt++;
                    }
                }

            }
            cout<<endl;
        }
      }
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