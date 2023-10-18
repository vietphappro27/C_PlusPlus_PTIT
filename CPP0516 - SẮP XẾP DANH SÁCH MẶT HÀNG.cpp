#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct product
{
    int ma;
    string name, type;
    double cost, price;
};
typedef struct product pro;
void nhap(pro p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        p[i].ma = i + 1;
        cin.ignore();
        getline(cin, p[i].name);
        getline(cin, p[i].type);
        cin >> p[i].cost >> p[i].price;
    }
}
void in(pro p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << p[i].ma << " ";
        cout << p[i].name << " ";
        cout << p[i].type << " ";
        cout << fixed << setprecision(2) << p[i].price - p[i].cost << "\n";
    }
}
bool cmp(pro a, pro b)
{
    return (a.price-a.cost) > (b.price-b.cost);
}
int main()
{
    int n;
    cin >> n;
    pro p[n];
    nhap(p, n);
    sort(p,p+n,cmp);
    in(p, n);
}
