#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int count =0;
     for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
        
        if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

  if(count%2 ==0) cout<<n-count<<endl;
  else cout<<n-(count+1)<<endl;
   }
    return 0;
}