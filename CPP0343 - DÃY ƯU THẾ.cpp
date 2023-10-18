#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;   
        getline(cin, s);
        stringstream ss(s);
        string word;
        int even = 0, odd = 0;
        while (ss >> word)
        {
            reverse(word.begin(),word.end());
            if ((word[0] - '0') % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even > odd && (even + odd) % 2 == 0)
            cout << "YES\n";
        else if (odd > even && (even + odd) % 2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
