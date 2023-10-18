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
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                cout << a[i] << " ";
                else 
                cnt++;
        }
        for (int i=0;i<cnt;i++)
        {
            cout << "0 ";
            
        }
        cout << "\n";
    }
    return 0;
}
