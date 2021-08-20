//0.2 points

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    int i, j;
    int prime[100000] = {0};
    for (i = 2; i <= 100000; i++)
    {
        prime[i] = 1;
    }
    for (i = 2; i <= 100000; i++)
    {
        for (j = i + i; j <= 100000; j += i)
        {
            prime[j] = 0;
        }
    }

    int L, U;
    int primeS[10000];
    int count = 0;
    int x;
    int close = 1000000, far = 0;
    int c1 = 0, c2 = 0, f1 = 0, f2 = 0;
    while (cin >> L >> U)
    {
        for (i = L; i <= U; i++)
        {
            if (prime[i] == 1)
            {
                primeS[count] = i;
                count++;
            }
        }
        if (count < 2)
        {
            printf("There are no adjacent primes.\n");
        }
        else
        {
            for (i = 1; i < count; i++)
            {
                x = primeS[i] - primeS[i - 1];
                if (x < close)
                {
                    c1 = primeS[i - 1], c2 = primeS[i];
                    close = x;
                }
                if (x > far)
                {
                    f1 = primeS[i - 1], f2 = primeS[i];
                    far = x;
                }
            }
            printf("%d,%d are closest, %d,%d are most distant.\n", c1, c2, f1, f2);
        }
    }
}
