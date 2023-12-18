#include<iostream>
#include<set>
using namespace std;

typedef long long ll;

int main() {
    ll n, sum = 0;
    cin >> n;
    ll x = n / 2, X = (n / 2) + 1;
    ll result = (n * (n + 1)) / 2;
    int a = 1, b = n;
    set<int> printedNumbers;

    if (result % 2 == 1) {
        cout << "NO";
    } else {
        cout <<"YES\n"<< x << "\n";

        for (int i = 1; i <= x; i++) {
            cout << b << " ";
            printedNumbers.insert(b);
            sum += b;
            b--;

            if (sum == result / 2)
                break;

            cout << a << " ";
            printedNumbers.insert(a);
            sum += a;
            a++;

            if (sum == result / 2)
                break;
        }
        if(n%2==1)
        cout <<"\n"<< X << "\n";
        else
         cout <<"\n"<< X-1 << "\n";
        for (int i = 1; i <= n; i++) {
            if (printedNumbers.find(i) == printedNumbers.end()) {
                cout << i << " ";            }
        }
    }

    return 0;
}
