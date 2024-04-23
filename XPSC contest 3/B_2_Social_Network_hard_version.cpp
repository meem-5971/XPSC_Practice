#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int n,k;
  cin>>n>>k;

  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  } 
  deque<int>dq;
  map<int,int>cnt;
  for(int i=0;i<n;i++){
    if(cnt[a[i]]>=1){
        continue;//msg ta already upor ay
    }
    if(dq.empty()){
        dq.push_back(a[i]);// empty display
        cnt[a[i]]++;
    }
    else {
      if (dq.size()<k){//display te jayga ache
        dq.push_front(a[i]);
        cnt[a[i]]++;
      }
      else{
        int x=dq.back();// display te space nai, tai back theke pop kore front ay push
        dq.pop_back();
        cnt[x]--;
         dq.push_front(a[i]);
        cnt[a[i]]++;
      }
    }
  }
  cout<<dq.size()<<endl;
   for(int i=0;i<dq.size();i++)
     cout<<dq[i]<<" ";
     cout<<'\n';
    return 0;
}