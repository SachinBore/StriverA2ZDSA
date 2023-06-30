#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(string str, int start, int end) {

	if (start >= end) return true;
	return (str[start] == str[end] && isPalindrome(str, start + 1, end - 1));
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("inputrecur.txt", "r", stdin);
	freopen("outputrecur.txt", "w", stdout);
#endif

	string str;
	cin >> str;

	if (isPalindrome(str, 0, str.length() - 1)) cout << "Palindrome" << endl;
	else cout << "Not Palindrome" << endl;

	return 0;
}
