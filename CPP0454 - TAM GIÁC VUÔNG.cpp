#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int solve(ll a[], int n)
{
    int i = n - 1;
    for (int i = n - 1; i >= 2; i--)
    {
        int l = 0, r = i - 1;
        while (l < r)
        {
            if (a[l] + a[r] == a[i])
                return 1;
            else if (a[l] + a[r] > a[i])
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            a[i] = tmp * tmp;
        }
        sort(a, a + n);
        if (solve(a, n))
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
}
