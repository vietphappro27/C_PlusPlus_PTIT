#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;   cin.ignore();
    while(t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        vector <string>str;
        while(ss >> word)
        {
            str.push_back(word);
        }
        for(auto i=str.rbegin(); i!=str.rend();i++)
        {
            cout << *i << " ";
        }
        cout << "\n";
    }
}
