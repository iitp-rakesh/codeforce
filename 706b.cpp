#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &v, int key)
{
    int l = 0, r = v.size() - 1;
    int mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (key == v[mid])
        {
            return mid + 1;
        }
        else if (key > v[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return mid;
}
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
    int x;
    cin >> x;
    for(int i = 0; i < x; i++){
    int key;
    cin >> key;
    cout << binary_search(v, key) << endl;
    }
    return 0;
}