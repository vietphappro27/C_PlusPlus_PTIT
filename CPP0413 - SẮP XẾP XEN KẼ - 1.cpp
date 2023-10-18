#include <bits/stdc++.h>
#include <algorithm>
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
        int i = 0;
        while (i < n)
        {
            if (i % 2 == 0)
            {
                cout << a[r--] << " ";
            }
            else
                cout << a[l++]<< " ";
            i++;
        }
        cout << "\n";
    }
    return 0;
}
