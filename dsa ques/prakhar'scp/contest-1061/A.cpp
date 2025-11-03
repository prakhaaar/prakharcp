#include <cstdio>
 
int main() {
    int t;
    std::scanf("%d", &t);
 
    while (t--) {
        long long n;
        std::scanf("%lld", &n);
        long long ans = (n - 1) / 2;
        std::printf("%lld\n", ans);
    }
 
    return 0;
}