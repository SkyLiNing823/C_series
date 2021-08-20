#include <iostream> 
#include <fstream> 
using namespace std;

void init(int p[][9][10])
{
	int r, c, n;
	for (r = 0; r < 9; r++)
		for (c = 0; c < 9; c++)
			for (n = 1; n <= 9; n++)
				p[r][c][n] = 1;
}

void update(int p[][9][10], int R, int C, int N)
{
	int r, c, n;
	// the same row
	for (c = 0; c < 9; c++)
		p[R][c][N] = 0;
	// the same col
	for (r = 0; r < 9; r++)
		p[r][C][N] = 0;
	// the same block
	for (r = R / 3 * 3; r <= R / 3 * 3 + 2; r++)
		for (c = C / 3 * 3; c <= C / 3 * 3 + 2; c++)
			p[r][c][N] = 0;
	p[R][C][N] = 1;
}

void Sudoku_Read(int Qno, int Q[][9], int p[][9][10])
{
	int r, c, n;
	ifstream fin;
	fin.open("Q1.txt");
	for (r = 0; r < 9; r++)
	{
		for (c = 0; c < 9; c++)
		{
			fin >> n;
			Q[r][c] = n;
			if (n > 0)
				update(p, r, c, n);
		}
	}
	fin.close();
}

void Sudoku_Print(int Q[][9])
{
	int r, c;
	for (r = 0; r < 9; r++)
	{
		for (c = 0; c < 9; c++)
		{
			if (Q[r][c] == 0)
				cout << "0 ";
			else
				cout << Q[r][c] << " ";
			if (c == 2 || c == 5)
				cout << "|";
		}
		cout << endl;
		if (r == 2 || r == 5)
			cout << "-------------------" << endl;
	}
}

int Sudoku_Check(int p[][9][10], int R, int C)
{// ¦PRow check  
	int sum = 0, n, a;
	for (n = 1; n <= 9; n++)
	{
		sum += p[R][C][n];
		if (p[R][C][n] == 1)
			a = n;
	}
	if (sum == 1)
		return a;
	else
		return 0;
}


int main()
{
	int r, c, n, modified = 1;
	int Q[9][9];
	int A[9][9];
	int pool[9][9][10];
	init(pool);
	Sudoku_Read(1, Q, pool);
	for (r = 0; r < 9; r++)
		for (c = 0; c < 9; c++)
			A[r][c] = Q[r][c];
	Sudoku_Print(Q);
	cout << endl;
	while (modified == 1)
	{
		modified = 0;
		for (r = 0; r < 9; r++)
		{
			for (c = 0; c < 9; c++)
			{
				if (A[r][c] == 0)
				{
					n = Sudoku_Check(pool, r, c); //0-9
					if (n > 0)
					{
						A[r][c] = n;
						update(pool, r, c, n);
						modified = 1;
					}
				}
			}
		}
	}
	Sudoku_Print(A);
	return 0;
}
