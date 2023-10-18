#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct SinhVien
{
    string msv, name, lop;
    double sub1, sub2, sub3;
};
typedef struct SinhVien sv;
void nhap(sv ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, ds[i].msv);
        getline(cin, ds[i].name);
        getline(cin, ds[i].lop);
        cin >>ds[i].sub1 >> ds[i].sub2 >> ds[i].sub3;
    }
}
void in(sv ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " ";
        cout << ds[i].msv << " ";
        cout << ds[i].name << " ";
        cout << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].sub1 << " " << ds[i].sub2 << " " << ds[i].sub3 << "\n";
    }
}

bool cmp(sv a, sv b)
{
    return a.name < b.name;
}
int main()
{
    int n;
    cin >> n;
    sv ds[n];
    nhap(ds, n);
    sort(ds, ds + n, cmp);
    in(ds, n);
}
