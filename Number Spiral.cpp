#include<bits/stdc++.h>
using namespace std;

void calculation(long long int y, long long int x) {
    long long int result = 0;

    if (x > y) {
        if (x % 2 == 0) {
            result = (x - 1) * (x - 1) + y;
        } else {
            result = x * x - (y - 1);
        }
    } else if (x < y) {
        if (y % 2 == 0) {
            result = y * y - (x - 1);
        } else {
            result = (y - 1) * (y - 1) + x;
        }
    } else {
        result = x * x - (y - 1);
    }

    cout << result << '\n';
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t, x, y;
    cin >> t;

    while (t--) {
        cin >> y >> x;
        calculation(y, x);
    }

    return 0;
}
