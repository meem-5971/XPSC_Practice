//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    int n = S.size();
    
   // int i=0,j=0;
    
    
     int res=0;
    for (int i = 0; i < n; i++) {
        int fq[26]={0};  
 
        for (int j = i; j < n; j++) {
            if (fq[S[j]-'a']==1)
                break;
            else {
                res = max(res, j - i + 1);
                fq[S[j]-'a']++;
            }
        }
         fq[S[i]-'a'] = 0;
    }
    return res;
}