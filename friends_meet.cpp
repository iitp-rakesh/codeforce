#include <iostream>
using namespace std;
int main()
{
    int a, b, sub, req;
    cin >> a >> b;
    if (b > a)
    {
        sub = (b - a) / 2;
        req = sub * (sub + 1) / 2 + (b - a - sub) * (b - a - sub + 1) / 2;
    }
    if (a > b)
    {
        sub = (a - b) / 2;
    
    req = sub * (sub + 1) / 2 + (a - b - sub) * (a - b - sub + 1) / 2;}
    cout<<req;
    return 0;
}