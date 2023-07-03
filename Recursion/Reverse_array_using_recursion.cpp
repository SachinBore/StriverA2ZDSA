#include <bits/stdc++.h>

using namespace std;

void reverseArray(vector<int> &arr, int start, int end) {
	if (start > end) return;

	swap(arr[start], arr[end]);

	reverseArray(arr, start + 1, end - 1);
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	int n; cin >> n;

	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (auto i : arr) cout << i << " ";
	cout << endl;

	reverseArray(arr, 0, n - 1);

	for (auto i : arr) cout << i << " ";



	return 0;
}