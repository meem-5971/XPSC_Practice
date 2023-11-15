#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
     int n;
     cin>>n;
     int a[n];
     int b[n];
    
     for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=1;//b array 1 diye initialize
     } 
       
     bool two=false, three=false;
     int fq[101]={0};
     for(int i=0;i<n;i++){
        fq[a[i]]++;
        if(fq[a[i]]==2){//ai==aj, condition ta 2bar ar besi check hbe na
            if(two==false){
                b[i]=2;
                two=true;
            }
            else if(three==false){
                b[i]=3;
                three= true;
            }
        }
     }
     //jdi same num multiple times thake, onno number na thake tahle 3ta condtion e fill up kore fele
     if(three==false){//jdi total frequency 2 ar besi tkhn else if ay jay na
        cout<<-1<<'\n';
        return;
     }
     else{
        for(int v:b){
            cout<<v<<" ";
        }
          cout<<'\n';
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