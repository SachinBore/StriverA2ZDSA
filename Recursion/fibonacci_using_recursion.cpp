#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
	if (n <= 1) return n;
	return fib(n - 1) + fib(n - 2);
}

// Time Complexity is O(2^n)
// Space Complexity is O(n)


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	int n; cin >> n;

	cout << fib(n) << endl;

	return 0;
}