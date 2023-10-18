#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
void solve(string s)
{
    int cnt[256]={0};
    for (int i=0;i<s.length();i++)
    {
        cnt[s[i]]++;
    }
    for(int i=0;i<s.length();i++)
    {
        if(cnt[s[i]])
        {
            cout << s[i] << cnt[s[i]] ;
            cnt[s[i]]=0;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        solve(s);
        cout << "\n";
    }
}
