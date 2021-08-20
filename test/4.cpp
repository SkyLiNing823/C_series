#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int N, M, P;
    cin >> N >> M >> P;

    int x[100], y[100];
    int i, j;

    int k;
    for (i = 0; i < P; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
    int max = 0;
    int d = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < M; j++)
        {
            int s = 1;
            for (k = 0; k < P; k++)
            {
                if (i == x[k] && j == y[k])
                {
                    s = 0;
                }
            }
            if (s == 1)
            {
                int f = 100000;
                for (k = 0; k < P; k++)
                {

                    int c = abs(i - x[k]) + abs(j - y[k]);
                    if (c < f)
                    {
                        f = c;
                    }
                }
                d = f;
                if (d > max)
                {
                    max = d;
                }
            }
        }
    }

    cout << max << endl;

    //cout << "2" >> endl;
}