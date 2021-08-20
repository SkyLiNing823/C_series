#include <iostream>

using namespace std;

int main()
{
    int N;
    int i, j;
    int A[28] = {0}, C[28] = {0};
    cin >> N;
    for (i = 0; i < N; i++)
    {
        cin >> A[i];
        cin >> C[i];
    }
    int T;
    long long P;
    cin >> T;
    while (T--)
    {
        cin >> P;
        int total = 0;
        for (i = 0; i < N; i++)
        {
            total += A[i];
        }
        if (P > total)
        {
            cout << "0" << endl;
            continue;
        }
        else
        {
            for (i = 0; i < N; i++)
            {
                for (j = i; j < N; j++)
                {
                    if (C[i] / A[i] > C[j] / A[j]) //i較便宜
                    {
                        int tmp1, tmp2;
                        tmp1 = C[i];
                        C[i] = C[j];
                        C[j] = tmp1;
                        tmp2 = A[i];
                        A[i] = A[j];
                        A[j] = tmp2;
                    }
                }
            }
            /*  for (i = 0; i < N; i++)
            {
                cout << A[i] << " " << C[i] << endl;
            } */
            long long sum = 0;
            for (i = 0; i < N; i++)
            {
                if (P > 0)
                {
                    P -= A[i];
                    sum += C[i];
                }
            }
            cout << "3" << endl;
        }
    }
}