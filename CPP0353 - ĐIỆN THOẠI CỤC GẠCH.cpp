// created by Nguyễn Việt Pháp

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'b' || s[i] == 'c')
            s[i] = '2';
        else if (s[i] == 'd' || s[i] == 'e' || s[i] == 'f')
            s[i] = '3';
        else if (s[i] == 'g' || s[i] == 'h' || s[i] == 'i')
            s[i] = '4';
        else if (s[i] == 'j' || s[i] == 'k' || s[i] == 'l')
            s[i] = '5';
        else if (s[i] == 'm' || s[i] == 'n' || s[i] == 'o')
            s[i] = '6';
        else if (s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's')
            s[i] = '7';
        else if (s[i] == 't' || s[i] == 'u' || s[i] == 'v')
            s[i] = '8';
        else
            s[i] = '9';
    }
    int l = 0, r = s.length() - 1;
    while (l < r)
    {
        if (s[l] != s[r])

        {
            cout << "NO";
            return;
        }
        l++;
        r--;
    }
    cout << "YES";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        solve(s);
        cout << "\n";
    }
}
