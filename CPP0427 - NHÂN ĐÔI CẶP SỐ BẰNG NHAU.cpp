#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n ; i++)
        {
            if (a[i] == 0)
                cnt++;
            if (a[i] == a[i + 1] && i<n-1)
            {
                a[i] *= 2;
                a[i + 1] = 0;
                i++;
                cnt++;
            }
        }
        for (int i=0;i<n;i++)
        {
            if(a[i]!=0)
            cout << a[i] << " ";
        }
        for (int i=0;i<cnt;i++)
        {
            cout << "0 ";
        }
        cout << "\n";
    }
}
