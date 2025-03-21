#include <iostream>
#include <vector>
using namespace std;

void sinhxauAB (string str, int n)
{
    if (str.length() == n)
	{
        cout << str << " ";
        return;
    }
    sinhxauAB(str + "A", n);
    sinhxauAB(str + "B", n);
}

int main ()
{
    int test;
    cin >> test;
    while (test--) 
	{
        int n;
        cin >> n;
        sinhxauAB ("", n);
        cout << endl;
    }
}
