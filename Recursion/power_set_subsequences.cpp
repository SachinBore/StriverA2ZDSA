#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> printAllSubsequence(vector<int>& str) {

	int n = str.size();
	int totalSubsequences = (1 << n);

	vector<vector<int>> res;

	for (int mask = 0; mask < totalSubsequences; mask++) {
		vector<int> tmp;
		for (int i = 0; i < n; i++) {
			if (mask & (1 << i)) {
				tmp.push_back(str[i]);
			}
		}
		if (tmp.size() != 0) res.push_back(tmp);
	}

	return res;
}


// it is the most optimised approach to print all subsequences
// we use bit masking approach
// total number of subsequences are 2^n
// TC is O((2^n)*n)

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

	vector<vector<int>> ans = printAllSubsequence(arr);

	for (auto it : ans) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}