#include <bits/stdc++.h>

using namespace std;

bool next_permutation(string& s) {
    int n = s.length();
    int i = n - 2;

    while (i >= 0 && s[i] >= s[i + 1]) {
        i--;
    }

    if (i < 0) {
        sort(s.begin(), s.end());
        return false;
    }

    int j = n - 1;
    while (j > i && s[j] <= s[i]) {
        j--;
    }

    swap(s[i], s[j]);

    int left = i + 1;
    int right = n - 1;
    while (left < right) {
        swap(s[left], s[right]);
        left++;
        right--;
    }

    return true;
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s;
        cin >> s;
        sort(s.begin(), s.end());

        do {
            cout << s << endl;
        } while (next_permutation(s));
    }

    return 0;
}