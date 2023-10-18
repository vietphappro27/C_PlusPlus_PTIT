#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct PhanSo
{
    ll tu, mau;
};
typedef struct PhanSo PhanSo;
void nhap(PhanSo &a)
{
    cin >> a.tu >> a.mau;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void rutgon(PhanSo &a)
{
    ll tmp = gcd(a.mau, a.tu);
    a.mau /= tmp;
    a.tu /= tmp;
}
void in(PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}
