#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct SinhVien
{
    string ma="B20DCCN001";
    string ten, lop, sinh;
    double gpa;
};
typedef struct SinhVien SinhVien;
void chuanhoa(string &sinh)
{
    string ans = "";
    int i = 0;
    string day = "";
    while (sinh[i] != '/')
    {
        day += sinh[i++];
    }
    if (day.length() == 1)
        day = '0' + day;
    i++;
    string month = "";
    while (sinh[i] != '/')
    {
        month += sinh[i++];
    }
    if (month.length() == 1)
        month = '0' + month;
    i++;
    string year = "";
    while (i < sinh.length())
    {
        year += sinh[i++];
    }
    ans = day + '/' + month + '/' + year;
    sinh = ans;
}
void nhap(SinhVien &a)
{
    getline(cin, a.ten);
    cin >> a.lop >> a.sinh >> a.gpa;
}
void in(SinhVien a)
{
    chuanhoa(a.sinh);
    cout << a.ma << " " << a.ten << " " << a.lop << " " << a.sinh << " ";
    cout << fixed << setprecision(2) << a.gpa;
}
int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}
