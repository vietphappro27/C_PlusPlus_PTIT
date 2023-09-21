// created by Nguyễn Việt Pháp

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool check(string s)
{
    int cnt[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (cnt[i] > s.length()-cnt[i]+1)
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
        cin >> s ;
        cout << check(s);
        cout << "\n";
    }
}
