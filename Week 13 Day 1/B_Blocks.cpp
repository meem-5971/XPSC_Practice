#include <bits/stdc++.h>
#define ll long long
#define fr(i,n)             for (ll i=0;i<n;i++)
using namespace std;

int main()
{
   ll n;
   cin>>n;
   string s;
   cin>>s;

    ll cnt=0,cnt2=0 ;
   

    vector<ll>v;
    for(int i=0;i<n;i++) if(s[i]=='W' )
    cnt++; 
    else 
    cnt2++;

    if(cnt ==n  || cnt2==n )cout<<0<<endl;
    else if(cnt%2  && cnt2%2 )cout<<-1<<endl;
    else
    {
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='B' and s[i+1]=='W'){
                s[i]='W';
                s[i+1]='B' ;
                v.push_back(i);
            }
            else if(s[i]=='B'  && s[i+1]=='B' ){
                s[i+1]='W'; 
                s[i]='W'; 
                v.push_back(i);
            }
        }
        if(s[n-1]=='B'){
         for(ll i=0; i<n-1; i+=2){
            v.push_back(i);
         }
        } 

        cout<<v.size()<<endl;
        for(int i=0;i<v.size();i++) {
            cout<<v[i]+1<<" ";
        }
    }

    return 0;
}