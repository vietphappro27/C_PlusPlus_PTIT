#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
ll fibo[1001];
void solve(ll fibo[])
{
    fibo[0]=0;
    fibo[1]=1;
    for (int i=2;i<1001;i++)
    {
        fibo[i]=fibo[i-2]+fibo[i-1];
        fibo[i]%=(1000000007);
    }
}
int main()
{
    int t;
    cin >> t;
    solve(fibo);
    while (t--)
    {
        int n;
        cin >> n;
        cout << fibo[n] << "\n";
    }
}
