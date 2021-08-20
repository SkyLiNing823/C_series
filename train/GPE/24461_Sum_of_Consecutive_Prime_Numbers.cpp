#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int prime[10001] = {0};
    for (i = 2; i < 10000; i++)
        prime[i] = 1;
    for (i = 2; i < 10000; i++)
        for (j = i + i; j < 10000; j += i)
            prime[j] = 0;

    int n, sum, sum2;
    while (cin >> n && n != 0)
    {
        sum = 0;
        for (i = 2; i <= n; i++)
        {
            sum2 = 0;
            if (prime[i])
            {
                for (j = i; j <= n; j++)
                {
                    if (prime[j])
                    {
                        sum2 += j;
                        if (sum2 == n)
                        {
                            sum += 1;
                            break;
                        }
                    }
                    if (sum2 >= n)
                    {
                        break;
                    }
                }
            }
        }
        cout << sum << endl;
    }
}