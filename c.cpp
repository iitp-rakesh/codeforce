#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max = arr[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            if (arr[i][j] >= max)
            {
                max = arr[i][j];
            }
        }
    }
    // cout << max;
    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i][0] == arr[i][1])
        {
            count++;
        }
    }
    sum = (count - 1) * count / 2;
    // cout<<sum;

    count=0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i][0] + arr[i][1]) % (max + 1) == 0)
        {
            count++;
        }
    }
    // cout<<count<<endl;
    sum = sum + (count - 1) * count / 2;
    cout << sum;
    return 0;
}