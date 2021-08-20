#include <iostream>

using namespace std;

//h(0) = 1, h(1) = 1
//h(n)= h(0)*h(n-1)+h(1)*h(n-2) + ... + h(n-1)h(0) (n>=2)

int main()
{
    int i, j;
    long long h[36] = {0}; //求35以內的卡特蘭數
    h[0] = h[1] = 1;
    for (i = 2; i < 36; i++)
    {
        for (j = 0; j < i; j++)
            h[i] += h[j] * h[i - j - 1];
    }
    for (i = 0; i < 36; i++)
        cout << h[i] << endl;
}