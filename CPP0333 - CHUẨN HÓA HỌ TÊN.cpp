#include <bits/stdc++.h>
using namespace std;
void last_name(string &s)
{
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
}
void first_name(string &s)
{
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = toupper(s[i]);
    }
}
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    vector<string> v;
    while (ss >> word)
    {
        last_name(word);
        v.push_back(word);
    }
    int n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        cout << v[i];
        if (i != n - 2)
            cout << " ";
        else
            cout << ", ";
    }
    first_name(v[n-1]);
    cout << v[n-1];
}
