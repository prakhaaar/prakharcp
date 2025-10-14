 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	int ntest;
	cin >> ntest;
	while (ntest--) {
		int x, y;
		cin >> x >> y;
		cout << max(x, y) + 1 << endl;
	}
 
	return 0;
