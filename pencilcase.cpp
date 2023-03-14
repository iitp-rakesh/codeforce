#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    int a[test][5];
    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < test; i++)
    {
        int pen = a[i][0] / a[i][2];
        int pencil = a[i][1] / a[i][3];
        if (a[i][0] % a[i][2] != 0)
        {
            pen++;
        }
        if (a[i][1] % a[i][3] != 0)
        {
            pencil++;
        }
        int sum=pen+pencil;
        if(sum>a[i][4]){
            cout<<-1;
        }
        else{
            cout<<pen<<" "<<(a[i][4]-pen);
        }
        cout<<endl;
    }
    return 0;
}