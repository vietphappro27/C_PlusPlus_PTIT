// created by Nguyễn Việt Pháp

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool solve(string s, int k)
{
    if (s.length() < 26)
        return 0;
    else
    {

        int cnt[256] = {0};
        for (int i = 0; i < s.length(); i++)
        {
            cnt[s[i]]++;
        }

        int dem = 0;
        for (int i = 0; i < 256; i++)
        {
            if (cnt[i])
                dem++;
        }
        if (26 - dem > k)
            return 0;
        return 1;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int k;
        cin >> s >> k;
        cout << solve(s,k);
        cout << "\n";
    }
}
