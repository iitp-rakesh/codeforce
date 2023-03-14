#include <iostream>
#include <array>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    array<vector<char>, n> gem;
    for (char i = 0; i < n; i++)
    {
        for (char j : gem)
        {
            cin >> gem[i][j];
        }
    }
    for (char i = 0; i < n; i++)
    {
        for (char j : gem){
            cout << gem[i][j];
        cout << endl;}
    }
}

return 0;
}