#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct SinhVien
{
    string ma, ten, lop, sinh;
    double gpa;
};
string chuanhoa(string s)
{
    string res = "";
    int i = 0;
    string day = "";
    while (s[i] != '/')
    {
        day += s[i++];
    }
    i++;
    if (day.length() == 1)
        day = '0' + day;
    string month = "";
    while (s[i] != '/')
    {
        month += s[i++];
    }
    i++;
    if (month.length() == 1)
        month = '0' + month;
    string year = "";
    while (i < s.length())
        year += s[i++];
    res = day + '/' + month + '/' + year;
    return res;
}
void nhapThongTinSV(struct SinhVien &a)
{
    a.ma = "N20DCCN001";
    getline(cin, a.ten);
    cin >> a.lop >> a.sinh >> a.gpa;
    a.sinh = chuanhoa(a.sinh);
}
void inThongTinSV(struct SinhVien a)
{
    cout << a.ma << " ";
    cout << a.ten << " ";
    cout << a.lop << " ";
    cout << a.sinh << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}
