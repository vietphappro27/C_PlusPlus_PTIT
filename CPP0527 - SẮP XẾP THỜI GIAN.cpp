#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct time
{
    int s,m,h;
};
bool cmp(struct time a, struct time b)
{
    if(a.h==b.h)
    {
        if(a.m==b.m)
        {
            return a.s<b.s;
        }
        return a.m<b.m;
    }
    return a.h<b.h;
}
int main()
{
    int n;
    cin >> n;
    struct time t[n];
    for (int i=0;i<n;i++)
    {
        cin >> t[i].h >> t[i].m >> t[i].s;
    }
    sort(t,t+n,cmp);
    for (int i=0;i<n;i++)
    {
        cout << t[i].h <<" "<<t[i].m << " "<<t[i].s << "\n";
    }
}
