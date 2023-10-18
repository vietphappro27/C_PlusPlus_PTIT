#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int cnt[1000001] = {0};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
        }
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (s.find(a[i] + x) != s.end())
            {
                cout << "1";
                check = 1;
                break;
            }
        }
        if (!check)
        {
            cout << "-1";
        }
        cout << "\n";
    }
}
