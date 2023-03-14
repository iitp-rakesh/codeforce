#include <iostream>
using namespace std;

int main() {
	int tt;
	cin>> tt;
	while (tt--) {
        int x, y;
        cin >> x >> y;
	    if (x & 1) {
            int first = 1;
            for (int i = 3; i <= x; i++) {
                if (!(x % i)) {
                    first = i;
                    break;
                }
            }
            cout << (y - x - first + 1) / 2 + 1;
	    } else {
	        cout << (y - x + 1)/2;
	    }
	    cout << "\n";
	}
	return 0;
}