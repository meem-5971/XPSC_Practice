#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t; cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=1e9;
    for(int i=0;i<n;i++){
        if(a[i]%k==0){
            ans=0;
        }
        else{
            ans=min(ans,(((a[i]/k)+1)*k)-a[i]); // 7 k 5 diye divisible korar jnno 7/5==1 ** 1+1= 2*5 =10 now the total op =10-7=3
        }
    }
     if(k==4){
        int z=0,o=0;
    for(int i=0;i<n;i++){
        a[i]%=2;//storing the remainders
        if(a[i]==0){
            z++;//even numbers
        }
        else {
            o++;
        }
        
    }
    if(z>=2) ans=0;//2ta even number ar multiplication 4 diye divisible
    if(o>=2) ans=min(ans,2);// 2ta odd number thakle 1 plus kore 2tay 2take even kora jabe
    if(z>=1 && o>=1) ans= min(ans,1);//1ta odd 1 ta even hole odd tay 1 plus kore even kora jabe

   

   }
    cout<<ans<<endl;
   }
  
    return 0;
}