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
    while(t--)
    {
            ll n,m;
            cin>>n>>m;
            ll cnt1[33]={0};
            for(int i=0;i<n;i++)
            {
                    ll x;
                    cin>>x;
                    for(int j=0;j<32;j++)
                    {
                           if((x&1)==1)cnt1[j]++;
                          // cout<<x<<" ";
                           x=(x>>1);
                    }
                    //cout<<endl;
            }
            ll cnt2[33]={0};
            for(int i=0;i<m;i++)
            {
                    int x;
                    cin>>x;
                     for(int j=0;j<32;j++)
                    {
                           if((x&1)==1)cnt2[j]++;
                           x=(x>>1);
                    }
            }
            ll ans=0;
            ll x=1;
            for(int i=0;i<32;i++)
            {
                    //cout<<cnt1[i]<<" ";
                    if(cnt1[i]%2==1)ans+=x;
                    //cout<<ans<<" ";
                    x*=2;
            }
            //cout<<endl;
            ll mn=ans;
            ll mx=ans;
            //cout<<ans<<endl;
            if(n%2==1)
            {
                    x=1;
                    for(int i=0;i<33;i++)
                    {
                            if(cnt2[i]>0)
                            {
                                    if(cnt1[i]%2==0)mx+=x;
                            }
                            x*=2;
                    }
            }
            else{
                x=1;
                for(int i=0;i<33;i++)
                {
                        if(cnt2[i]>0)
                        {
                                if(cnt1[i]%2==1)mn-=x;
                        }
                        x*=2;
                }
            }
            cout<<mn<<" "<<mx<<endl;
    }
    return 0;
}