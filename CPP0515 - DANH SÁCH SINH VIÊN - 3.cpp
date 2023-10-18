#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct SinhVien
{
    string ma, ten, lop, sinh;
    double gpa;
};
typedef struct SinhVien sv;
void nhap(sv ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        ds[i].ma = to_string(i + 1);
        while (ds[i].ma.length() != 3)
        {
            ds[i].ma = '0' + ds[i].ma;
        }
        ds[i].ma = "B20DCCN" + ds[i].ma;
        cin.ignore();
        string s;
        getline(cin, s);
        ds[i].ten="";
        stringstream ss(s);
        string word;
        while(ss>> word)
        {
            word[0]=toupper(word[0]);
            for (int j=1;j<word.length();j++)
            {
                word[j]=tolower(word[j]);
            }
            ds[i].ten+=word;
            ds[i].ten+=" ";
        }
        ds[i].ten.erase(ds[i].ten.end()-1);
        cin >> ds[i].lop >> ds[i].sinh >> ds[i].gpa;
        if (ds[i].sinh[2] != '/')
            ds[i].sinh = '0' + ds[i].sinh;
        if (ds[i].sinh[5] != '/')
            ds[i].sinh.insert(3, "0");
    }
}
void in(sv ds[], int N)
{
    for (int i = 0; i < N; i++)
    {
        cout << ds[i].ma << " ";
        cout << ds[i].ten << " ";
        cout << ds[i].lop << " ";
        cout << ds[i].sinh << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}
bool cmp(sv a,sv b)
{
    return a.gpa>b.gpa;
}
void sapxep(sv ds[],int N)
{
    sort(ds,ds+N,cmp);
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}

