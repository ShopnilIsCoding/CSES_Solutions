#include <iostream>
using namespace std;
int countTrailingZeros(int n) {
    int zeros = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        zeros += n / i;
    }
    return zeros;
}
int main() {
    int n;
    cin >> n;
    if (n < 1 || n > 1000000000) {
        cout << "Invalid input. Constraints: 1 <= n <= 10^9." << endl;
        return 1;
    }
    int trailingZeros = countTrailingZeros(n);
    cout << trailingZeros << endl;
    return 0;
}
