#include <bits/stdc++.h>

using namespace std;

void solve(int n) {
	if (n == 0) return;

	solve(n / 2);
	cout << n % 2;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	int n; cin >> n;

	solve(n);

	return 0;
}
