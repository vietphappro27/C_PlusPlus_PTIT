#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct NhanVien
{
    string ten,gioitinh,sinh,dc,tax,ngayki;
};
typedef struct NhanVien nv;

void nhap(nv &x)
{
    cin.ignore();
    getline(cin , x.ten);
    cin >> x.gioitinh >> x.sinh ;
    cin.ignore();
    getline(cin,x.dc);
    cin >> x.tax >> x.ngayki;
}
void inds(nv ds[],int N)
{
    for (int i=0;i<N;i++)
    {
        string ma=to_string(i+1);
        while(ma.length()!=5)
        {
            ma='0'+ma;
        }
        cout << ma <<" ";
        cout << ds[i].ten  <<" ";
        cout << ds[i].gioitinh << " ";
        cout << ds[i].sinh <<" ";
        cout << ds[i].dc << " ";
        cout << ds[i].tax << " ";
        cout << ds[i].ngayki << "\n";
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
