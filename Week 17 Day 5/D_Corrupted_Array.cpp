#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin>>t;
 while(t--){
    ll n;
    cin>>n;
   ll a[n+2];
     ll sum=0;
    for(int i=0;i<n+2;i++){
        cin>>a[i];
         sum+=a[i];
    }
    sort(a,a+n+2);
    ll m=a[n+1];
    sum=sum-a[n+1];
    int flag=0;
    int f=-1;
    for(int i=0;i<n+1;i++){
        if(sum-a[i]==m){
          f=i;
           break;
        }
    }
    if(f!=-1){
    flag=1;
    for (int i = 0; i < n + 1; i++)
      {
        if (i == f)
          continue;
        else
        {
          cout << a[i] << " ";
        }
      }
      cout << endl;
      continue;
    }
    else{
        sum = sum - a[n];
      long long int s = 0;
      for (int i = 0; i < n; i++)
      {
        s = s + a[i];
      }
      if (s == a[n])
      {
        flag = 1;
        for (int i = 0; i < n; i++)
          cout << a[i] << " ";
        cout << endl;
      }
    }

   if(flag==0) cout<<-1<<'\n';
  
 }  
    return 0;
}