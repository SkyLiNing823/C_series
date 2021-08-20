#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    long N, M, P;
    cin >> N >> M >> P;
    int list[100000] = {0};
    int x[10000];
    int y[10000];
    int i, j;
    int k;
    for (i = 0; i < P; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    for (i = 0; i < P; i++)
    {
        list[x[i]] = 1;
    }
    int max = 0;
    int d = 0;
    for (i = 0; i < N; i++)
    {
        if (list[i] == 0)
        {
            int tmp = 100000000;
            for (k = 0; k < P; k++)
            {
                int c = abs(i - x[k]);
                if (c < tmp)
                {
                    tmp = c;
                }
            }
            d = tmp;
            if (d > max)
            {
                max = d;
                // cout << ld << " " << rd << endl;
            }
        }
    }

    cout << max << endl;

    //cout << "2" >> endl;
}