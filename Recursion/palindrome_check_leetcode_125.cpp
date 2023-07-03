#include <bits/stdc++.h>

using namespace std;


bool check(string s) {
    string newstr = "";
    for (int i = 0; i < s.length(); i++) {
        if (isalnum(s[i]) != 0) {
            newstr += tolower(s[i]);
        }
    }

    int n = newstr.length();

    for (int i = 0; i < n; i++) {
        if (newstr[i] != newstr[n - i - 1]) return false;
    }
    return true;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("inputrecur.txt", "r", stdin);
    freopen("outputrecur.txt", "w", stdout);
#endif

    string str; cin >> str;

    if (check(str)) cout << "palindrome" << endl;
    else cout << "Not palindrome" << endl;

    return 0;
}