#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct ThiSinh
{
    string ten,sinh;
    double mon1,mon2,mon3,tongdiem;
};
typedef struct ThiSinh ThiSinh;
void nhap(ThiSinh &a)
{
    getline(cin,a.ten);
    cin >> a.sinh  >> a.mon1 >> a.mon2>> a.mon3;
    a.tongdiem=a.mon1+a.mon2+a.mon3;
}
void in(ThiSinh a)
{
    cout << a.ten << " " << a.sinh << " ";
    cout << fixed << setprecision(1) << a.tongdiem;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}
