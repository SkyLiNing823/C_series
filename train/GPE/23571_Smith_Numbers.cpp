#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

const float ERROR = 1e-9;

int S(int x)
{
    int y = 0;
    while (x > 0)
    {
        y += x % 10;
        x /= 10;
    }
    return y;
}

int main()
{
    int prime[100005] = {0};
    int i, j;
    for (i = 2; i < 100005; i++)
    {
        prime[i] = 1;
    }
    for (i = 2; i < 100005; i++)
        for (j = i + i; j < 100005; j += i)
            prime[j] = 0;

    int n;
    int N;
    cin >> n;
    while (n--)
    {
        cin >> N;
        N += 1;
        while (true)
        {
            int sum1 = 0, sum2 = 0;
            int temp = N;
            int sqrt_temp = (int)(sqrt(temp));
            for (int j = 2; j <= sqrt_temp && temp > 1; ++j)
            {
                if (prime[j])
                {
                    while (temp % j == 0)
                    {
                        sum2 += S(j);
                        temp /= j;
                    }
                }
            }

            if (temp != N)
            {
                if (temp > 1)
                    sum2 += S(temp);

                sum1 = S(N);
                if (sum1 == sum2)
                    break;
            }

            N++;
        }

        printf("%d\n", N);
    }
}
