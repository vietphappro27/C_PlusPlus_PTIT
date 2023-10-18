#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n ;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int Min = 1e9;
        int ans;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if(abs(a[j]+a[i])<Min)
                {
                    Min=abs(a[i]+a[j]);
                    ans=a[i]+a[j];
                }
            }
        }
        cout << ans;
        cout << "\n";
    }
}
