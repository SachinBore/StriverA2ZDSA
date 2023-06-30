#include <bits/stdc++.h>
#define MOD 1000000007;

using namespace std;

long long power(int n, int r) {

	if (r == 0) return 1;

	long long tmp = power(n, r / 2) % MOD;
	long long square = (tmp * tmp) % MOD;

	if (r % 2 == 0) return square;
	return (n * square) % MOD;
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	int n, r; cin >> n >> r;

	cout << power(n, r);

	return 0;
}