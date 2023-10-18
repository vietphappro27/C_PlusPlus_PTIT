#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct SinhVien
{
    string ma,ten,lop,sinh;
    double gpa;
};
typedef struct SinhVien sv;
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
void nhap(sv ds[],int N)
{
   for (int i=0;i<N;i++)
    {
        ds[i].ma=to_string(i+1);
        while(ds[i].ma.length()!=3)
        {
            ds[i].ma='0'+ds[i].ma;
        }
        ds[i].ma="B20DCCN"+ds[i].ma;
        cin.ignore();
        getline(cin,ds[i].ten);
        cin >> ds[i].lop >> ds[i].sinh >> ds[i].gpa;
        chuanhoa(ds[i].sinh);
    }
}
void in(sv ds[],int N)
{
    for (int i=0;i<N;i++)
    {
        cout << ds[i].ma << " ";
        cout << ds[i].ten <<" ";
        cout << ds[i].lop << " ";
        cout << ds[i].sinh << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
} 
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
