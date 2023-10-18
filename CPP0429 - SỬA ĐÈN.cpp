#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int n, k, b;
    cin >> n >> k >> b;
    int a[n+1];
    for (int i=0;i<n+1;i++)
    {
        a[i]=0;
    }
    for (int i = 0; i < b; i++)
    {
        int tmp;
        cin >> tmp;
        a[tmp]=1;
    }
    int sum=accumulate(a+1,a+k+1,0);
    int res=sum;
    for (int i = k+1; i <= n; i++)
    {
        sum=sum-a[i-k]+a[i];
        res=min(res,sum);
    }
    cout << res;
    return 0;
}
