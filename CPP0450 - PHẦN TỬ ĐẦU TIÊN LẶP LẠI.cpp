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
        int cnt[1000001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int ok = 0;
        for (int i = 0; i < n; i++)
        {
            cnt[a[i]]++;
            if (cnt[a[i]] == 2)
            {
                cout << a[i] << "\n";
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "-1\n";
    }
    return 0;
}
