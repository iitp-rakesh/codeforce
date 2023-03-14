#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        char s[8][8];
        int flag = 0;
        for (int i = 0; i < 8; i++)
        {
            int count = 0;
            for (int j = 0; j < 8; j++)
            {
                cin >> s[i][j];
                if (s[i][j] == 'R')
                {
                    count++;
                }
            }
            if (count == 8)
            {
                cout << "R";
                flag = 1;
            }
        }
        // for (int i = 0; i < 8; i++)
        // {
        //     char x = s[i][0];
        //     int count = 0;
        //     if (x == 'R' || x == 'B' && flag == 0)
        //     {

        //         for (int j = 0; j < 8; j++)
        //         {
        //             if (x == s[i][j])
        //             {
        //                 count++;
        //             }
        //         }
        //         if (count == 8)
        //         {
        //             cout << s[i][0] << endl;
        //             flag = 1;
        //         }
        //     }
        //     if (flag == 1)
        //     {
        //         break;
        //     }
        // }
        if (flag == 0)
        {
            for (int i = 0; i < 8; i++)
            {
                // char x = s[0][i];
                int count = 0;
                for (int j = 0; j < 8; j++)
                {
                    if (s[i][j] == 'R')
                    {
                        count++;
                    }
                }
                if (count == 8)
                {
                    cout << 'R';
                    flag = 1;
                }

                if (flag == 1)
                {
                    break;
                }
            }
        }
        if (flag == 0){
            cout<<"B";
        }
        cout<<endl;
    }

    return 0;
}