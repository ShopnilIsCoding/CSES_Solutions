#include <iostream>
#include <vector>
#include <bitset>
using namespace std;
void generateGrayCode(int n, vector<bitset<16>>& grayCode, int& current) {
    if (n == 1) {
        grayCode[current++] = bitset<16>(0);
        grayCode[current++] = bitset<16>(1);
        return;
    }

    generateGrayCode(n - 1, grayCode, current);

    for (int i = current - 1; i >= 0; --i) {
        grayCode[current++] = grayCode[i];
    }

    for (int i = 0; i < current / 2; ++i) {
        grayCode[i].set(n - 1);
    }
}

int main() {
    int n;
    cin >> n;

    int total = 1 << n;
    vector<bitset<16>> grayCode(total);

    int current = 0;
    generateGrayCode(n, grayCode, current);

    for (int i = 0; i < total; ++i) {
        cout << grayCode[i].to_string().substr(16 - n) << "\n";
    }

    return 0;
}
