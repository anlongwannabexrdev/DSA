#include <bits/stdc++.h>

using namespace std;

vector<int> a;
vector<vector<int>> result;
vector<int> current;
int k;

void backtrack(int pos, int sum) {
    if (sum == k) {
        result.push_back(current);
        return;
    }
    if (pos == a.size() || sum > k) {
        return;
    }
    for (int i = pos; i < a.size(); i++) {
        current.push_back(a[i]);
        backtrack(i + 1, sum + a[i]);
        current.pop_back();
    }
}

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n >> k;
        a.clear();
        a.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        result.clear();
        current.clear();
        backtrack(0, 0);

        if (result.empty()) {
            cout << -1 << endl;
        } else {
            sort(result.begin(), result.end());
            for (int i = 0; i < result.size(); i++) {
                cout << "[";
                for (int j = 0; j < result[i].size(); j++) {
                    cout << result[i][j];
                    if (j < result[i].size() - 1) cout << " ";
                }
                cout << "] ";
            }
            cout << endl;
        }
    }

    return 0;
}