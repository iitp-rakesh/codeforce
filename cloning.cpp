#include <iostream>
using namespace std;
int main()
{
    long long ori, copy;
    cin >> copy >> ori;
    int i=0, x, y = 0;
    for (x = 1; x < ori; x++)
    {
        y++;
    }
    if (x > 1)
    {
        for (i = y; i < copy; i++)
        {
            i++;
        }
    }
    
    if (x == ori && i == copy)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}