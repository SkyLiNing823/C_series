#include <iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main()
{
    int i, j;
    int prime[1000000]={1};
    for (i = 0; i < 1000000; i++)
        prime[i] = 1;
    prime[0] = 0;
    prime[1] = 0;
    for (i = 2; i < 1000000; i++)
    {
        if (prime[i])
            for (int j = i + i; j < 1000000; j += i)
                prime[j] = 0;
    }

    int N;
    int t1, t2;
    scanf("%d",&N);
    while (N--)
    {
        int count = 0;
        scanf("%d %d",&t1,&t2);
        for (i = t1; i <= t2; i++)
        {
            int sum = 0;
            j = i;
            while (j > 0)
            {
                sum += j % 10;
                j = j / 10;
            }
            if (prime[i] == 1 && prime[sum] == 1)
                count += 1;
        }
        printf("%d\n",count);
    }
}
