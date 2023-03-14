#include <iostream>
using namespace std;
int main()
{
    int snow, ht, stone1, stone2, ht1, ht2;
    cin >> snow >> ht;
    // int a[]a[2];
    /*for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }*/
    cin >> stone1 >> ht1;
    cin >> stone2 >> ht2;
    int net = snow;
  if (ht2 > ht1)
    {
        int t = ht1;
        ht1 = ht2;
        ht2 = t;
        int x=stone1;
        stone1=stone2;
        stone2=x;
    }
    for (int i = ht; i > 0; i--)
    {
        net = net + i;
        if (i == ht1)
        {
            net = net - stone1;
        }
        if (net < 0)
        {
            net = 0;
        }
        if (i == ht2)
        {
            net = net - stone2;
        }
        if (net < 0)
        {
            net = 0;
        }
    }
    cout << net;

    return 0;
}