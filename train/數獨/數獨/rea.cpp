#include <iostream>
#include <fstream>
using namespace std;
int main() 
{
	ifstream fin;
	fin.open("Q1.txt");
	int x;
	fin >> x;
	cout << x << endl;
	fin >> x;
	cout << x << endl;
	fin >> x;
	cout << x << endl;
	fin >> x;
	cout << x << endl;
	fin.close();
	return 0;
}
