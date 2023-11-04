#include<bits/stdc++.h>
#define ll long long
using namespace std;
double getDistance(int ax, int ay, int bx, int by)
{
    return sqrt(((ax - bx) * (ax - bx)) + ((ay - by) * (ay - by)));
}
bool isInside(int ax, int ay, int px, int py, double r)
{
    double d = getDistance(ax, ay, px, py);
    return (r - d) > 1e-15;
}  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
  int t;    cin>>t;
  while(t--){
    int px,py;  cin>>px>>py;
    int ax,ay;  cin>>ax>>ay;
    int bx,by;  cin>>bx>>by;

    double l=0.0,r=INT_MAX*1.0,ans;

    while((r-l)>1e-15){

        double rad=l+(r-l)/2;
       if(isInside(ax,ay,px,py,rad) && isInside(ax,ay,0,0,rad)){ // source,destination A circle ar vetore
        ans=rad;
        r=rad;
       }
       else if(isInside(bx,by,px,py,rad) && isInside(bx,by,0,0,rad)){// source,destination B circle ar vetore
        ans=rad;
        r=rad;
       }
       else if(isInside(ax,ay,0,0,rad) && isInside(bx,by,px,py,rad) && ((2*rad)-getDistance(ax,ay,bx,by))>1e-15){
        ans=rad; // source A circle ar vetore ,destination B circle ar vetor, A,B ar centre ar diff<=2r
        r=rad;
       }
       else if(isInside(bx,by,0,0,rad) && isInside(ax,ay,px,py,rad) && ((2*rad)-getDistance(ax,ay,bx,by))>1e-15){
        ans=rad;// source B circle ar vetore ,destination A circle ar vetor, A,B ar centre ar diff<=2r
        r=rad;
       }
       else{
        l=rad;
       }

       
    }
     cout << fixed << setprecision(10) << ans << endl;
    
  }
    return 0;
}