#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mx=1e5+5;
int tree[mx*3];  
void build(int node,int l,int r,int a[]){//nlogn
   // cout<<"Node no : "<<node<<" Array range : "<<l<<" "<<r<<'\n';
    if(l==r){
        tree[node]=a[r];//leaf node ay value set
        return; //base case
    }
    //node numbering
    int leftnode=node*2;
    int rightnode=(node*2)+1;

    //segmenting
    int mid=(l+r)/2;
    build(leftnode,l,mid,a);
    build(rightnode,mid+1,r,a);
    
     // baki nodes ay value set(segment sum set)
    tree[node] = min(tree[leftnode],tree[rightnode]); // merge
      
}
int query(int node,int l,int r,int x,int y){//logn
    // x<->y range l<->r range ar baire tai purota bad
    if(r < x || l > y){
        return INT_MAX;
    }
    // x<->y range l<->r range ar vetore tai purota nibo
    else if(l >= x && r <= y){
        return tree[node];
    }
    // x<->y range partially l<->r range ar vetore tai partially nibo
    else{
        int leftnode=node*2;
    int rightnode=(node*2)+1;
    int mid=(l+r)/2;
    int m= query(leftnode,l,mid,x,y);
    int n= query(rightnode,mid+1,r,x,y);
    return min(m,n);
    }
}
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int t;
 cin>>t;
 for(int c=1;c<=t;c++){
   int n,q;
   cin>>n>>q;
   int a[n];
   for(int i=1;i<=n;i++){
    cin>>a[i];

   }
    build(1,1,n,a);
    cout<<"Case "<<c<<":"<<'\n';
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        cout<<query(1,1,n,l,r)<<'\n';

    }
 }
   
  

   
    return 0;
}