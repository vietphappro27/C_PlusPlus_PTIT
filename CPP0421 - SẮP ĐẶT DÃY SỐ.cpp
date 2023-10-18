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
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = -1;
        }
        for (int i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            if (tmp >= 0 && tmp < n)
            {
                b[tmp] = tmp;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
