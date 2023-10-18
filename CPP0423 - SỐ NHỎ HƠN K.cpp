#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int m = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
                m++;
        }
        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            if (a[i] <= k)
                ans++;
        }
        int tmp=ans;
        for (int i=m;i<n;i++)
        {
           if(a[i]<=k)
           tmp++;
           if(a[i-m]<=k)
           tmp--;
           ans=max(tmp,ans);   
        }
        cout << m-ans << "\n";
    }
    return 0;
}
