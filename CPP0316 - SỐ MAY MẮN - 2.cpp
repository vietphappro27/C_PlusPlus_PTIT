#include <bits/stdc++.h>
using namespace std;
int check(string s)
{
    if (s.length() == 1)
    {
        if (s[0] == '9')
            return 1;
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += s[i] - '0';
    }
    string tmp = to_string(sum);
    return check(tmp);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << check(s);
        cout << "\n";
    }
}
