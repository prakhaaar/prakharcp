#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long L, R;
        cin >> L >> R;

        long long count = R - L + 1;
        long long sum = count * (L + R) / 2;

        cout << sum << "\n";
    }

    return 0;
}
