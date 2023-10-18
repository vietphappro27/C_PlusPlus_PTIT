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
        cout << (ll)n * (1 + n) / 2 << "\n";
    }
    return 0;
}
