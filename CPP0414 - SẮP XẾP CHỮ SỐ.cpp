#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void count(int a, int cnt[])
{
    while (a)
    {
        int tmp = a % 10;
        cnt[tmp]++;
        a /= 10;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cnt[10] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            count(a[i], cnt);
        }
        for (int i = 0; i < 10; i++)
        {
            if (cnt[i] != 0)
                cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
