#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
 int n,m;
while(cin>>n>>m){
 int a[n];
 int l=0,r=INT_MAX,ans;
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 while(l<=r){
    int cap=l+(r-l)/2;
    int container=1;
    int sum=0;
    for(int i=0;i<n;i++){
         if (a[i] > cap)
                {
                    container = INT_MAX;//loop ar porer first if jeno satisfy na kore tai INT_MAX set korlam container
                    //jdi elements capacity theke boro hoy tahle break hye new capacity set korbe
                    break;
                }
                sum += a[i];
                if (sum > cap)
                {
                    container++;//agyr container vore gele new container 
                    sum = a[i];//j element ta overflow hcche seta new container ay jacche
                }
    }
     if (container <= m)
            {
                ans = cap;//jdi container ay hye jay tahle better ans khujbo j min kto capacity prjnto hote pare
                r = cap - 1;
            }
            else
            {
                l = cap + 1;// jdi capacity barano lage tahle right ay jabo
            }
 }
 cout<<ans<<endl;

}
    return 0;
}