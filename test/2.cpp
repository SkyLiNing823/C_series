#include <iostream>

using namespace std;

int main()
{
    int n, r, b;
    cin >> n >> r >> b;
    int i;
    long long DP[100001] = {0};
    DP[0] = 1;
    for (i = 1; i < 100001; i++)
    {
        DP[i] = r * DP[i - 1];
        DP[i] += b;
    }
    while (n--)
    {
        int x;
        cin >> x;
        cout << DP[x] << endl;
    }
}