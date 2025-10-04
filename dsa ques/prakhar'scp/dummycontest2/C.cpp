#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i += k)
    {
        int group_size = min(k, n - i);
        int s = INT_MAX;

        for (int j = 0; j < group_size; ++j)
        {
            int y;
            cin >> y;
            s = min(s, y);
        }

        cout << s << " ";
    }

    cout << "\n";
    return 0;
}
