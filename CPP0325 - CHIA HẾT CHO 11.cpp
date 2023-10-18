#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    reverse(s.begin(), s.end());
    int sum = 0;
    int i = 0;
    while (i < s.length())
    {
        if (i % 2 == 0)
        {
            sum += s[i] - '0';
        }
        else
        {
            sum -= s[i] - '0';
        }
        i++;
    }
    if (sum % 11 == 0)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << check(s) << "\n";
    }
}
