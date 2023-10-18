// created by Nguyễn Việt Pháp

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int res(string s)
{
    int Max = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]))
        {
            string tmp = "";
            while (isdigit(s[i]))
            {
                tmp += s[i];
                i++;
            }
            int temp = stoi(tmp);
            Max=max(temp,Max);
        }
    }
    return Max;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << res(s);
        cout << "\n";
    }
}
