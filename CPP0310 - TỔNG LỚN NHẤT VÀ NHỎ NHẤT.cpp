#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(string a,string b)
{
    //sum min 
    for (int i=0;i<a.length();i++)
    {
        if(a[i]=='6')
        a[i]='5';
    }
    for (int i=0;i<b.length();i++)
    {
        if(b[i]=='6')
        b[i]='5';
    }
    ll x=stoll(a),y=stoll(b);
    cout << x+y << " ";
    //sum max
    for (int i=0;i<a.length();i++)
    {
        if(a[i]=='5')
        a[i]='6';
    }
    for (int i=0;i<b.length();i++)
    {
        if(b[i]=='5')
        b[i]='6';
    }
    ll m=stoll(a),n=stoll(b);
    cout << m+n ;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a,b;
        cin >> a >> b;
        solve(a,b);
        cout << "\n";
    }
}
