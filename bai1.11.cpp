#include <bits/stdc++.h>

using namespace std;

void hamsinhtohop(int n, int k, int batdau, vector<int>& current, vector<vector<int>> & allCombinations) 
{
    if (current.size() == k) {
        allCombinations.push_back(current);
        return;
    }
    for (int i = batdau; i <= n; ++i) {
        current.push_back(i);
        hamsinhtohop(n, k, i + 1, current, allCombinations);
        current.pop_back();
    }
}

int timvitri(const vector<vector<int>>& allCombinations, const vector<int>& target)
{
    for (int i = 0; i < allCombinations.size(); ++i) {
        if (allCombinations[i] == target) {
            return i + 1;
        }
    }
    return -1; 
}

int main() {
    int tc;
    cin >> tc; 

    while (tc--) {
        int n, k, kq;
        cin >> n >> k; 

        vector<int> target(k);
        for (int i = 0; i < k; ++i) {
            cin >> target[i]; 
        }

        vector<vector<int>> allCombinations;
        vector<int> current;
        hamsinhtohop(n, k, 1, current, allCombinations);
        kq = timvitri(allCombinations, target);
        cout << kq << endl;
    }

    return 0;
}
