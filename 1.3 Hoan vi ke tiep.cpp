#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--) 
	{
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (next_permutation(a.begin(), a.end()))
		{
            for (int i = 0; i < n; i++)
			{
                cout << a[i] << " ";
            }
        }
		else {
            // Truong hop neu la h.vi cuoi, in ra lai h.vi dau tien
            sort(a.begin(), a.end());
            	for (int i = 0; i < n; i++)
				{
                	cout << a[i] << " ";
            	}
        }
        cout << endl;
    }
}

