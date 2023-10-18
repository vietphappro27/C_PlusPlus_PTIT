#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;  cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        int cnt =0;
        while(ss >> word)
        {
            // cout << word << " ";
            cnt++;
        }
        cout << cnt ;
        cout << "\n";
    }
}
