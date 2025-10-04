#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
                }
        for (int start = 0; start < N; ++start) {
            int current_max = A[start];
            for (int end = start; end < N; ++end) {
                current_max = max(current_max, A[end]);
                cout << current_max << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
