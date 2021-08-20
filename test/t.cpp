#include <iostream>

using namespace std;

int main()
{
    int N;
    int i;
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
        int sum = 0;
        for (i = 0; i < N; i++)
        {
            if (P > 0)
            {
                P -= A[i];
                sum += C[i];
            }
        }
        cout << sum << endl;
    }
}
