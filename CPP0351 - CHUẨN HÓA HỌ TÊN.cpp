#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void chuan_hoa(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
void solve(string s, int n)
{
    stringstream ss(s);
    vector<string> v;
    string word;
    while (ss >> word)
    {
        chuan_hoa(word);
        v.push_back(word);
    }
    if (n == 1)
    {
        cout << v[v.size() - 1] << " ";
        for (int i = 0; i < v.size() - 1; i++)
        {
            cout << v[i] << " ";
        }
    }
    else
    {
        for (int i = 1; i < v.size() ; i++)
        {
            cout << v[i] << " ";
        }
        cout << v[0];
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n; 
        cin.ignore();
        string s;
        getline(cin, s);
        solve(s,n);
        cout << "\n";
    }
}
