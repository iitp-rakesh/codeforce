#include <iostream>
using namespace std;
int main()
{
    long long l, r, x, y, k, i, j;
    cin >> l >> r >> x >> y >> k;
    bool pre = false;
    for (i = l; i <= r; i++)
    {
        for (j = x; j <= y; j++)
        {
            float eff = i / j;
            if (eff == k)
            {
                
                pre = true;
            }
        }
    }
    if(pre){
        cout << "YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}