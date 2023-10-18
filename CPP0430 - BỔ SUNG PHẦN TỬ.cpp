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
        int a[n];
        int cnt[100001] = {0};
        int Min = 1e9, Max = -1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            Min = min(Min, a[i]);
            Max = max(Max, a[i]);
            if (cnt[a[i]] == 0)
            {
                cnt[a[i]]++;
            }
        }
        int dem = 0;
        for (int i = Min; i < Max; i++)
        {
            if (cnt[i] == 0)
                dem++;
        }
        cout << dem;
        cout << "\n";
    }
}
