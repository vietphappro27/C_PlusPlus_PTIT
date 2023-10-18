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
        cin >> n;
        int a[n - 1];
        int cnt[n];
        for (int i = 0; i < n; i++)
        {
            cnt[i] = 0;
        }
        for (int i = 0; i < n-1; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (cnt[i] == 0)
            {
                cout << i;
                break;
            }
        }
        cout << "\n";
    }
}
