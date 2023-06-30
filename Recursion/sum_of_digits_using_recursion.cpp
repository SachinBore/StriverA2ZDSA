#include <bits/stdc++.h>

using namespace std;

int solve(int n) {

	if (n <= 9) return n;
	return n % 10 + solve(n / 10);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	int n; cin >> n;

	cout << solve(n);

	return 0;
}