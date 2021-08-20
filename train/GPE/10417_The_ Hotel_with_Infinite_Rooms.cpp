#include <iostream>

using namespace std;

int main()
{
    int S;
    long long D;
    int i;
    while (cin >> S >> D)
    {
        i = S;
        D -= i;
        while (D > 0)
        {
            i++;
            D -= i;
        }
        cout << i << endl;
    }
}