#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mx=1e5+5;
int tree[mx*4];  
int n,q;
int k;
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
    tree[node] = tree[leftnode] + tree[rightnode]; // merge
      
}
long long query(int node,int l,int r,int x,int y){//logn
    // x<->y range l<->r range ar baire tai purota bad
    if(r < x || l > y){
        return 0;
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
    return query(leftnode,l,mid,x,y)+query(rightnode,mid+1,r,x,y);
    }
}
  void update(int node,int l,int r,int idx,int val){
    //segment ar baire
     if (idx < l || idx > r)
        return;
        //l/r node tai update korte hbe
     if (l == r && l == idx)//change from reference
    {
        if (k == 1)
            tree[node] = val;
        else
            tree[node] += val;
        return;
    }
    //l<->r segment ar vetor ay akta index ar value update korte hbe
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    update(leftNode, l, mid, idx, val);
    update(rightNode, mid + 1, r, idx, val);
    tree[node] = tree[leftNode] + tree[rightNode];
  }
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
    int t;
 cin>>t;
 for(int c=1;c<=t;c++){
   
   cin>>n>>q;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];

   }
     build(1,0,n-1,a);
    cout<<"Case "<<c<<":"<<'\n';
    for(int i=0;i<q;i++){
       
        cin>>k;
        if(k==1){
            int x;
            cin>>x;
            x++;
           cout << query(1, 1, n, x, x) << '\n';
                update(1, 1, n, x, 0);
        }
       else if(k==2){
            int x,y;
            cin>>x>>y;
             x++;
                update(1, 1, n, x, y);
       }
        else if(k==3){
            int x,y;
            cin>>x>>y;
           x++, y++;
                cout << query(1, 1, n, x, y) << '\n';
        }

    }
 }
   
    return 0;
}