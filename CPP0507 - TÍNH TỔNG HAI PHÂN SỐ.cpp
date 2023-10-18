#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct PhanSo
{
    ll tu, mau;
};
// typedef struct PhanSo PhanSo;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return a / gcd(a, b) * b;
}
void rutgon(struct PhanSo &a)
{
    ll tmp = gcd(a.mau, a.tu);
    a.mau /= tmp;
    a.tu /= tmp;
}
void nhap(struct PhanSo &a)
{
    cin >> a.tu >> a.mau;
    rutgon(a);
}
struct PhanSo tong(struct PhanSo a, struct PhanSo b)
{
    struct PhanSo sum;
    sum.mau = lcm(a.mau, b.mau);
    sum.tu = a.tu * (sum.mau / a.mau) + b.tu * (sum.mau / b.mau);
    rutgon(sum);
    return sum;
}
void in(struct PhanSo a)
{
    cout << a.tu << "/" << a.mau;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}
