#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   ll t;
    
    cin>>t;
    
    while(t--)
    {
        ll l, r, x, a, b;
        cin>>l>>r>>x;
        
        cin>>a>>b;
        
        if(a==b){
            cout<<"0\n";
        }
        else if(a<b){
            if(b-a>=x){
                cout<<"1\n";
            }else{
                if(a-l>=x){
                    cout<<"2\n";
                }else if(r-b>=x){
                    cout<<"2\n";
                }else if(r-a>=x && b-l>=x){
                    cout<<"3\n";
                }else{
                    cout<<"-1\n";
                }
            }
        }
        else{
            if(a-b>=x){
                cout<<"1\n";
            }else if(b-l>=x){
                cout<<"2\n";
            }else if(r-a>=x){
                cout<<"2\n";
            }else if(a-l>=x && r-b>=x){
                cout<<"3\n";
            }else{
                cout<<"-1\n";
            }
        }
    }
    return 0;
}