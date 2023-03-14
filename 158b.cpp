#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    sort(v.begin(), v.end());
    int count = 0, l = 0;
    for (int i = v.size() - 1; l <= i; i--)
    {
        int seat = v[i];
        // if (v[i] == 4)
        // {
        //     count++;
        // }
        // else if (v[i] == 3 && v[l] == 1)
        // {
        //     count++;
        //     l++;
        // }
        // else if (v[i] == 2)
        // {
        //     while (seat < 3 && l <= i)
        //     {
        //         seat += v[l];
        //         l++;
        //     }
        //     count++;
        // }
        // else if (v[i] == 1)
        // {
        //     while (seat < 4 && l <= i)
        //     {
        //         seat += v[l];
        //         l++;
        //     }
        //     count++;
        // }
        if(seat==4){
            count++;
        }
        else{
            while(i>l){
                seat+=v[l];
                // cout<<seat<<" ";
                if(seat==4){
                    l++;
                    count++;
                    break;
                }
                else if(seat<4){
                    l++;
                }
                else{
                    count++;
                    break;
                }
            }
        }
        if(seat<4){
        count++;
    }
    }
    
    cout << count;
    return 0;
}