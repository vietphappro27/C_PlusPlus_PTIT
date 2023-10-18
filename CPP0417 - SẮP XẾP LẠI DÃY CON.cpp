#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i]=a[i];
           
        }
        sort(a,a+n);
        int l=0;
        while(a[l]==b[l])
        {
            l++;
        }
        int r=n-1;
        while(a[r]==b[r])
        {
            r--;
        }
        cout << l+1 << " " << r+1;
        cout << "\n";
    }
}
