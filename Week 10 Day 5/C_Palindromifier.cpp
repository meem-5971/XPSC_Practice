#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   string s,s1;
   cin>>s;
   ll n=s.size();
    s1=s;
        reverse(s1.begin(),s1.end());
        if(s==s1)
        {
            cout<<0<<endl;
        }
        //last char hbe palindrome ar middle index
        //op1: 1st char soho jeno pechone nite pari tai ami nijer ecchay 1st char k smne nicchi
        //op2; new string ar 2nd char theke mid char ar ag prjnto pechone jabe
        //op 3; new string ar n-1th character tar copy last ay jabe
        else
        {
         cout<<3<<'\n';
   cout<<"L"<<' '<<2<<'\n';//l
   cout<<"R"<<' '<<2<<'\n';
   n=n*2;
   cout<<"R"<<' '<<n-1<<'\n';
        }
    return 0;
}