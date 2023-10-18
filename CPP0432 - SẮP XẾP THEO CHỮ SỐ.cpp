#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int cmp(string a, string b)
{
    string x = a + b;
    string y = b + a;
    return x > y;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        for (int i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << "\n";
    }
}
