#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i)
    {
        for (int s = 1; s <= N - i; ++s)
            cout << " ";

    
        for (int star = 1; star <= 2 * i - 1; ++star)
            cout << "*";

        cout << "\n";
    }

    
    for (int i = 1; i <= N; ++i)
    {
        for (int s = 1; s < i; ++s)
            cout << " ";

        for (int star = 1; star <= 2 * (N - i + 1) - 1; ++star)
            cout << "*";

        cout << "\n";
    }

    return 0;
}
