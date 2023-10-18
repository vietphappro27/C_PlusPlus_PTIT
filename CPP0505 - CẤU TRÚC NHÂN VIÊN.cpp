#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct NhanVien
{
    string ma;
    string ten, sex, sinh, address, tax, hopdong;
};
void nhap(struct NhanVien &a)
{
    a.ma = "00001";
    getline(cin, a.ten);
    cin >> a.sex >> a.sinh;
    cin.ignore();
    getline(cin, a.address);
    cin >> a.tax >> a.hopdong;
}
void in(struct NhanVien a)
{
    cout << a.ma << " " << a.ten << " " << a.sex << " ";
    cout << a.sinh << " " << a.address << " " << a.tax << " " << a.hopdong;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}
