// created by Nguyễn Việt Pháp

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int check1(vector<char> v)
{
    for (int i = 0; i < 4; i++)
    {
        if (v[i] >= v[i + 1])
            return 0;
    }
    return 1;
}
int check2(vector<char> v)
{
    for (int i = 1; i < 5; i++)
    {
        if (v[i] != v[0])
            return 0;
    }
    return 1;
}
int check3(vector<char> v)
{
    if (v[0] != v[1] || v[1] != v[2])
        return 0;
    if (v[3] != v[4])
        return 0;
    return 1;
}
int check4(vector<char> v)
{
    for (int i = 0; i < 5; i++)
    {
        if (v[i] != '6' && v[i] != '8')
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
        vector<char> v;
        for (int i = s.length() - 6; i < s.length() ; i++)
        {
            if (s[i] != '.')
                v.push_back(s[i]);
        }
        if(check1(v) || check2(v) || check3(v) || check4(v))
        cout << "YES";
        else
        cout << "NO";
        cout << "\n";
    }
}
