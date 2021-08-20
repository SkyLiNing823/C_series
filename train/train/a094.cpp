#include <iostream>
using namespace std;
int main()
{
	int N, R, i, j, s;
	int A[1000];
	while (cin >> N >> R) {
		for (i = 0; i < R; i++) {
			cin >> A[i];
		}
		if (N == R) {
			cout << "*" << endl;
			continue;
		}
		for (i = 1; i <= N; i++) {
			s = 0;
			for (j = 0; j < R; j++) {
				if (A[j] == i)
					s = 1;
			}
			if (s == 0)
				cout << i << " ";
		}
		cout << endl;
	}
}
