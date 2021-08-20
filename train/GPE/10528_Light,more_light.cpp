#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    unsigned long bulbs, n;
    while (cin >> bulbs)
    {
        if (bulbs == 0)
            break;

        n = sqrt(bulbs);
        if (n * n == bulbs)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
}