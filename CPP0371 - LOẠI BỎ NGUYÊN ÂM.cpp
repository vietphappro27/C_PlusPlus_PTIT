#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
void solve(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
        {
            cout << "." << s[i];
        }
    }
}
int main()
{
    string s;
    cin >> s;
    solve(s);
    cout << "\n";
}
