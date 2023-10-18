#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int Max = -1e9;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            if (tmp > Max)
            {
                Max = tmp;
            }
        }
        int Min = 1e9;
        for (int i = 0; i < m; i++)
        {
            int tmp;
            cin >> tmp;
            if (tmp < Min)
            {
                Min = tmp;
            }
        }
        cout << (ll)Max * Min << "\n";
    }
}
