#include <iostream>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int rem = x % 4;
    if (rem == 1)
    {
        cout << "0 A";
    }
    if (rem == 3)
    {
        cout << "2 A";
    }
    if (rem == 2)
    {
        cout << "1 B";
    }
    if (rem == 0)
    {
        cout << "1 A";
    }
    return 0;
}