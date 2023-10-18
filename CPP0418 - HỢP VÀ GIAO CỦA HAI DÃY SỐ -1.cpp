#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin >>n >> m;
        int a[n],b[m];
        set<int> U,I;
        for (int i=0;i<n;i++)
        {
            cin >> a[i];
            U.insert(a[i]);
        }
        for (int i=0;i<m;i++)
        {
            cin >> b[i];
            U.insert(b[i]);
        }
        int i=0,j=0;
        while(i<n && j < n)
        {
            if(a[i]<b[j])
            {
                i++;
            }
            else if(a[i]>b[j])
            {
                j++;
            }
            else 
            {
                I.insert(a[i]);
                i++;
                j++;
            }
        }
        for (auto i: U)
        {
            cout << i <<" ";
        }
        cout << "\n";
        for (auto i:I)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}
