#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(int a[], int n)
{
    int Min1 = 1e9, Min2 = 1e9;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Min1)
            Min1 = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] < Min2 && a[i] != Min1)
            Min2 = a[i];
    }
    if (Min2 != 1e9)
    {
        cout << Min1 << " " << Min2;
    }
    else
        cout << "-1";
}
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
        solve(a,n);
        cout << "\n";
    }
}
