#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    long long dp[30005] = {1};
    int money[] = {10000, 5000, 2000, 1000, 500,
                   200, 100, 50, 20, 10, 5};
    int part1, part2;

    for (int i = 10; i >= 0; i--)
        for (int j = money[i]; j <= 30000; j++)
            dp[j] += dp[j - money[i]];

    while (scanf("%d.%d", &part1, &part2) != EOF &&
           !(part1 == 0 && part2 == 0))
        printf("%3d.%02d%17lld\n", part1, part2, dp[part1 * 100 + part2]);

    //%3d 输出三位宽度的整数， 不足时后补空格
    //%02d 输出二位宽度的整数， 不足时前补0
    //%17lld 输出十七位宽度的long long整数

    return 0;
}