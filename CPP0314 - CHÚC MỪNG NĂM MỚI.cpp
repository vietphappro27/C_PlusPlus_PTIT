#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    set<string> s;
    while (t--)
    {

        string tmp;
        getline(cin, tmp);
        s.insert(tmp);
    }
    cout << s.size();
}
