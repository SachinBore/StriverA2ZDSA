#include <bits/stdc++.h>

using namespace std;

void solve(int index, vector<int>& arr, vector<int>&ds, vector<vector<int>>& res) {
	if (index >= arr.size()) {
		if (ds.size() != 0) {
			res.push_back(ds);
		}
		return;
	}

	solve(index + 1, arr, ds, res); // not take
	ds.push_back(arr[index]);
	solve(index + 1, arr, ds, res); // take
	ds.pop_back();
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	int n; cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) cin >> arr[i];

	vector<int> ds;
	vector<vector<int>> res;

	solve(0, arr, ds, res);

	for (auto it : res) {
		for (auto i : it) {
			cout << i << " ";
		}
		cout << endl;
	}

}