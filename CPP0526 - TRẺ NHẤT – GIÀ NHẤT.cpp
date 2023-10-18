#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct person
{
    int d,m,y;
    string name;
};
typedef struct person ps;
bool cmp(ps a,ps b)
{
    if(a.y==b.y)
    {
        if(a.m==b.m)
        {
            return a.d<b.d;
        }
        return a.m<b.m;
    }
    return a.y<b.y;
}
int main() 
{
	int n;
    cin >> n;
    ps a[n];
    for (int i=0;i<n;i++)
    {
        cin >> a[i].name;
        scanf("%d/%d/%d",&a[i].d,&a[i].m,&a[i].y);
    }
    sort(a,a+n,cmp);
    cout << a[n-1].name << "\n" << a[0].name;
    return 0;
}

