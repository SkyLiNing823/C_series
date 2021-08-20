#include <iostream>

using namespace std;

int main()
{
    int n;
    long long ans[100] = {0, 1, 2};
    while (cin >> n)
    {
        for (int i = 3; i <= n; i++)
        {
            ans[i] = ans[i - 1] + ans[i - 2];
        }
        cout << ans[n] << endl;
    }
}