#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    stringstream ss(a);
    string word;
    while (ss >> word)
    {
        if (word != b)
            cout << word << " ";
    }
}
