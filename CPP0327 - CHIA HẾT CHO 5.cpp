#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    reverse(s.begin(), s.end());
    int sum = 0;
    int i = 0;
    while (i < s.length())
    {
        if (s[i] == '1')
        {
            if (i % 4 == 0)
                sum += 1;
            else if (i % 4 == 1)
                sum += 2;
            else if (i % 4 == 2)
                sum += 4;
            else
                sum += 3;
        }
        i++;
    }
    if (sum % 5 == 0)
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
        if(check(s))
        cout << "Yes\n";
        else
        cout << "No\n";
    }
}
