#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
bool check_tn(string s)
{
    int l = 0, r = s.length() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}
bool check_even(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] - '0') % 2 != 0)
            return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check_tn(s) && check_even(s))
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
