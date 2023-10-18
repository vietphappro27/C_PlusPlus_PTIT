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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int l = 0, r = n - 1;
        int cnt = 0;
        while (l<=r)
        {
            cout << a[r--] << " ";
            cnt++;
            if (cnt == n)
                break;
            cout << a[l++] << " ";
            cnt++;
            if (cnt == n)
                break;
        }
        cout << "\n";
    }
}
