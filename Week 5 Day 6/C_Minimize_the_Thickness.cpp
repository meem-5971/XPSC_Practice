//prefix sum
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 bool binSearch(int a[],int n,int x){
      int l=0;
      int r=n;
      while(l<=r){
        int mid=l+(r-l)/2;
        if(mid==x){
            return true;

        }
        if (x < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
      }
      return false;
 } 
void solve(){
      int n;
      cin>>n;
      int a[n];
      for(int i=0;i<n;i++){
        cin>>a[i];
      }  
      int csum[n];
      csum[0]=a[0];
      for(int i=1;i<n;i++){
        csum[i]=csum[i-1]+a[i];//prefix sum store hcche
      }
      int ans=n;
      for(int i=0;i<n;i++){
      int sum=csum[i];
      sum+=sum;//prefix sum ar 1st elem 4 hole csum(prfix sum arry) te 4+4 ache kina khujbo
      int len=i+1,last=i;
      int idx;
      while(binary_search(csum, csum+n,sum)){
        idx=lower_bound(csum,csum+n,sum)-csum; //8 ar index number ber kortesi
       // cout<<idx<<endl;
        sum+=csum[i];//8+4 khujbo abar
        len=max(len,idx-last);//segment ar length
        last=idx;//segment ar last index
      }
      if(last==(n-1)){//i last index ay chole geche
        ans=min(ans,len);
      }

      }
      cout<<ans<<endl;
     
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
    solve();
  } 
    return 0;
}