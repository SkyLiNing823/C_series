#include<iostream>
using namespace std;
int main()
{
	int N;
	cin>>N;
	while (N--) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		if (a == b && b == c && c == d)
			cout << "square\n";
		else if (((a==b) && (c==d)) || ((a==c) && (b==d)) || ((a==d) && (b==c)))
			cout << "rectangle\n";
		else if ((a + b + c) > d && (d + b + c) > a && (a + d + c) > b && (a + b + d) > c)
			cout << "quadrangle\n";
		else
			cout << "banana\n";
	}
}
