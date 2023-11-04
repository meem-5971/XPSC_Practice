#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int l = 0, r = INT_MAX;
        bool finalAns = false;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            double ans = 1.0;
            for (int i = 0; i < n; i++)
            {
                ans *= (a[i] * 1.0 / mid);//prti ta value k 20 diye vag kore sob gulor multiplication 1 hole setaai ans
            }
            if (fabs(ans - 1.0) < 1e-15) //ans r 1.0 ar difference negligible 
            {
                finalAns = true;
                break;
            }
            else if (ans > 1.0)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if (finalAns)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}