#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
struct Point
{
    double x, y;
};
typedef struct Point Point;
void input(Point &a)
{
    cin >> a.x >> a.y;
}
double distance(Point a,Point b)
{
    return sqrt(pow(a.x-b.x,2)+pow(a.y-b.y,2));
}
int main(){
    struct Point A, B;
    int t;
    cin>>t;
    while(t--){
        input(A); input(B);
        cout << fixed << setprecision(4) << distance(A,B) << endl;
    }
    return 0;
}
