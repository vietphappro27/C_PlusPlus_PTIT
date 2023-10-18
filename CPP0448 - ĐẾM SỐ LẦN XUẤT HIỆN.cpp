#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int firstpos(int a[], int n, int k)
{
    int l = 0, r = n - 1;
    int pos = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
        {
            pos = m;
            r = m - 1;
        }
        else if (a[m] > k)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return pos;
}
int lastpos(int a[], int n, int k)
{
    int l = 0, r = n - 1;
    int pos = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == k)
        {
            pos = m;
            l = m + 1;
        }
        else if (a[m] > k)
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return pos;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (firstpos(a, n, k) == -1)
            cout << "-1";
        else
            cout << lastpos(a, n, k) - firstpos(a, n, k) + 1;
        cout << "\n";
    }
}
