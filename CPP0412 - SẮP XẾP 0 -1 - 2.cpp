#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt[3] = {0};
        for (int i = 0; i < n; i++)
        {
            int tmp;
            cin >> tmp;
            cnt[tmp]++;
        }
        for (int i = 0; i < 3; i++)
        {
            while (cnt[i])
            {
                cout << i << " ";
                cnt[i]--;
            }
        }
        cout << "\n";
    }
    return 0;
}
