#include<bits/stdc++.h>

using namespace std;

void sinhtohop(const vector<int>& arr, int m, int bd, vector<int>& current) 
{
    if (current.size() == m) 
    {
        for (int num : current) cout << num << " ";
        cout << endl;
        return;
    }
    for (int i = bd; i < arr.size(); ++i) 
    {
        current.push_back(arr[i]);
        sinhtohop(arr, m, i + 1, current);
        current.pop_back();
    }
}

int main() 
{
    int n, k;
    cin >> n >> k;
    set<int> uniqueElements;  
    for (int i = 0; i < n; ++i) 
    {
        int so;
        cin >> so;
        uniqueElements.insert(so);
    }
    vector<int> sortedArr(uniqueElements.begin(), uniqueElements.end());
    vector<int> current;
    sinhtohop(sortedArr, k, 0, current);
    return 0;
}

