#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll solve(ll x, ll y, ll p)
{
    ll ans = 1;
    while (y)
    {
        if (y % 2 == 1)
        {
            ans *= x;
            ans %= p;
        }
        x *= x;
        x%=p;
        y /= 2;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, p;
        cin >> x >> y >> p;
        cout << solve(x, y, p) << "\n";
    }
}
