#include <bits/stdc++.h>

using namespace std;

void solve(int n) {

	if (n == 0) return;
	solve(n - 1);
	cout << n << endl;
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