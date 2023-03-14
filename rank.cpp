#include <iostream>
using namespace std;
int main()
{
    int n, sum, chk;
    cin >> n;
    int marks[n][4];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> marks[i][j];
        }
        cout << endl;
    }
    int total_marks[n];
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 4; j++)
        {
            sum = sum + marks[i][j];
        }
        total_marks[i] = sum;
    }
    chk=1;
    for (int j = 0; j < n; j++)
    {
        if (total_marks[0] < total_marks[j])
        {
            chk++;
        }
    }
    cout<<chk;

    return 0;
}