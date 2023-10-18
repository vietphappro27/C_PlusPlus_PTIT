#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char n;
        cin >> n;
        if (isupper(n))
            cout << (char)tolower(n);
        else
            cout << (char)toupper(n);
        cout << "\n";
    }
    return 0;
}
