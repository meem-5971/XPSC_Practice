#include<bits/stdc++.h>
using namespace std;
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){// a1 ^ x ^ a2 ^ x
        int a;
        cin>>a;
        x=x^a;//x^0=x
    }
    // a1 ^ a2
    if(n%2==0){ //n even, kno x baad nai..tai array value gular ^ e hbe ans
        if(x==0){//x ar value o asle tar total xor 0 kora possible
            cout<<0<<endl;
        }
        else{//x ar value 0 ase nai, total xor 0 asbe na
            cout<<-1<<endl;
        }
    }
    //a1 ^ a2 ^ x
    else{// n odd, akta x  thakbe..setar jnno x diye xor krbo..tkhn total xor 0 asbe
        cout<<x<<endl;
    }
   }
    return 0;
}
