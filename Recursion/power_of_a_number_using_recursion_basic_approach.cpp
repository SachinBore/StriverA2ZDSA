#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p) {

	if (p == 0) return 1;
	return n * solve(n, p - 1);
}

// You are given two numbers n and p. You need to find n^p.
// Expected Time Complexity: O(p).
// Expected Auxiliary Space: O(p).
// not the optimal solution.

int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	int n, p; cin >> n >> p;

	cout << solve(n, p);

	return 0;
}