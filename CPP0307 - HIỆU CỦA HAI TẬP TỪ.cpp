#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void solve(string a, string b)
{
    stringstream ss1(a);
    vector<string> x;
    string word1;
    while (ss1 >> word1)
    {
        if (count(x.begin(), x.end(), word1) == 0)
            x.push_back(word1);
    }

    stringstream ss2(b);
    vector<string> y;
    string word2;
    while (ss2 >> word2)
    {
        if (count(y.begin(), y.end(), word2) == 0)
            y.push_back(word2);
    }
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] < y[j])
        {
            cout << x[i] << " ";
            i++;
        }
        else if (x[i] > y[j])
        {
            j++;
        }
        else

        {
            i++;
            j++;
        }
    }
    while (i < x.size())
    {
        cout << x[i] << " ";
        i++;
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        solve(a, b);
        cout << "\n";
    }
}
