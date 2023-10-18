#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct sinhvien
{
    int stt;
    string msv, name, lop, email, com;
};
typedef struct sinhvien sv;
void nhap(sv a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i].stt = i + 1;
        getline(cin,a[i].msv);
        getline(cin, a[i].name);
        getline(cin,a[i].lop);
        getline(cin,a[i].email);
        getline(cin,a[i].com);
    }
}
bool cmp(sv a,sv b)
{
    return a.name<b.name;
}
void solve(sv a[], int n, string company)
{
    sv ans[1001];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i].com == company)
            ans[cnt++] = a[i];
    }
    sort(ans,ans+cnt,cmp);
    for (int i=0;i<cnt;i++)
    {
        cout << ans[i].stt << " ";
        cout << ans[i].msv << " ";
        cout << ans[i].name << " ";
        cout << ans[i].lop << " ";
        cout << ans[i].email << " ";
        cout << ans[i].com << "\n";
    }
}
int main()
{
    int n;
    cin >> n; cin.ignore();
    sv ds[n];
    nhap(ds,n);
    int t; cin >> t;
    while(t--)
    {
        string company; cin >> company;
        solve(ds,n,company);
    }   
}
