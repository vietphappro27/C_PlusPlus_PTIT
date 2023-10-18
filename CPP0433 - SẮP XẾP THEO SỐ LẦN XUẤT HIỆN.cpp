#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            mp[tmp]++;
        }
        vector<pair<int, int> > v;
        for (auto i : mp)
        {
            pair<int, int> tmp;
            tmp.first = i.first;
            tmp.second = i.second;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end(), cmp);
        for (auto i : v)
        {
            for (int j = 0; j < i.second; j++)
            {
                cout << i.first << " ";
            }
        }
        cout << "\n";
    }
}
