#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
char Max[101], Min[101];
void solve(int m, int s)
// s:sum
// m:digits
{
    // Min
    if (s == 0)
    {
        if (m == 1)
            cout << "0 ";
        else
            cout << "-1 ";
    }
    else if (s > 9 * m)
        cout << "-1 ";
    else
    {
        int sum = s, n = 0;
        while (n < m)
        {
            if (sum > 9)
            {
                Min[n++] = '9';
                sum -= 9;
            }
            else if (sum > 1 && sum <= 9)
            {
                if (n == m - 1)
                {
                    Min[n++] = sum + '0';
                }
                else
                {
                    Min[n++] = sum - 1 + '0';
                    sum = 1;
                }
            }
            else // sum==1
            {
                if (n == m - 1)
                    Min[n++] = '1';
                else
                    Min[n++] = '0';
            }
        }
        reverse(Min, Min + n);
        for (int i = 0; i < n; i++)
        {
            cout << Min[i];
        }
    }
    cout << " ";
    // Max
    if (s == 0)
    {
        if (m == 1)
            cout << "0 ";
        else
            cout << "-1 ";
    }
    else if (s > 9 * m)
        cout << "-1 ";
    else
    {
        int sum = s, n = 0;
        while (n < m)
        {
            if (sum > 9)
            {
                Max[n++] = '9';
                sum -= 9;
            }
            else if (sum > 0 && sum <= 9)
            {
                int tmp = sum + '0';
                Max[n++] = tmp;
                sum = 0;
            }
            else // sum==0
                Max[n++] = '0';
        }
        for (int i = 0; i < n; i++)
        {
            cout << Max[i];
        }
    }
}
int main()
{
    int m, s;
    cin >> m >> s;
    solve(m, s);
}
