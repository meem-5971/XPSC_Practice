#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
       int n;
       cin>>n;
       vector<int>a(n+1);
       for(int i=1;i<=n;i++){
        cin>>a[i];
       } 
       map<int,vector<int>>idx; //vector ay thaka prti ta elements ar index map ay store
       
       for(int i=1;i<=n;i++){
            idx[a[i]].push_back(i);
        }

        bool imp=false;
        for(int i=1;i<=n;i++){//1 ta element 2 bar ar besi thkte parbe na
            if(idx[a[i]].size()>2){
                imp=true;
                break;
            }
        }
        if(imp) {
            cout<<"NO"<<'\n';
            return;
        }
        vector<int>p(n+1,-1),q(n+1,-1); //permutation 2tak -1 diye initialize
        multiset<int>remP,remQ;//akhan theke ascending order ay inserted value theke akta akta kore value ber korbo
        for(int i=1;i<=n;i++){
            remP.insert(i);//set 2tay permutation 
            remQ.insert(i);
        }
    for(int i=1;i<=n;i++){
        if(idx[i].empty()) continue; // a vector ay element ta nai
        if(idx[i].size()==1){
                p[idx[i][0]]=i;//a te jto number index ay element ti ache, toto nmbr index ay p te store
                remP.erase(remP.find(i));// jeta p te store hcche, seta remP theke erase hcche
            }
            else if(idx[i].size()==2){
                p[idx[i][0]]=i;
                remP.erase(remP.find(i));
                q[idx[i][1]]=i;//jdi kno element 2bar thake, thle 2nd time ar index onujayi q te store hbe
                remQ.erase(remQ.find(i));
            }
    }
    //a te jsob elements chilo,segula distribution sesh,p q ar baki elements gulo store krbo
    for(int i=1;i<=n;i++){
            if(p[i]==-1 and q[i]==-1){
                auto px=remP.end();//remaning element gulor moddhe max ta nicchi
                px--;//(end-1)th position ay max element ta ache
                p[i]=*px;
                remP.erase(px);
                auto qx=remQ.end();
                qx--;
                q[i]=*qx;
                remQ.erase(qx);
            }
             else if(p[i]==-1){
                if(remP.empty()){//remP te kno value nai,bt p te value lagbe..
                    imp=true;
                    break;
                }
                auto x=remP.upper_bound(q[i]);//q[i] ar upper bound ar 1 ghor agyr value p[i]ay set hbe
                if(x==remP.begin()){//upper bound jdi first element ta hoy tahle tar 2 ghor agy jawa pssbl na
                    imp=true;
                    break;
                }
                x--;
                p[i]=*x;
                remP.erase(x);
            }
             else if(q[i]==-1){
                if(remQ.empty()){
                    imp=true;
                    break;
                }
                auto x=remQ.upper_bound(p[i]);
                if(x==remQ.begin()){
                    imp=true;
                    break;
                }
                x--;
                q[i]=*x;
                remQ.erase(x);
            }
    }
    if(imp) {
        cout<<"NO"<<'\n';
        return;
    }
     cout<<"YES"<<endl;
        for(int i=1;i<=n;i++){
            cout<<p[i]<<" ";
        }cout<<endl;
        for(int i=1;i<=n;i++){
            cout<<q[i]<<" ";
        }cout<<endl;

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