#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int cnt[256] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            cnt[s[i]]++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (cnt[s[i]] == 1)
            {
                cout << s[i];
            }
        }
        cout << "\n";
    }
}
