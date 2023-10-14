//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
          int sum=0;
       int mx;
       map<int,int>mp;
     for(int i=0;i<N;i++){
         sum+=A[i];
         if(sum==K){
             return i+1;
         }
         if(sum>K){
             if(mp.find(sum-K)!=mp.end()){
                 mx=max(mx,i-mp[sum-K]);
                
             }
             
         }

         if(mp.find(sum)==mp.end()){
             mp[sum]=i;
         }
      
     }
     return mx;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends