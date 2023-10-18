#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
int count(string s)
{
    int ans=s.length();
    int cnt[256]={0};
    for (int i=0;i<s.length();i++)
    {
        cnt[s[i]]++;
    }
    for (int i=0;i<256;i++)
    {
        if(cnt[i]>1)
        {
            ans+=cnt[i]*(cnt[i]-1)/2;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        cout << count(s) << "\n";
    }
}
