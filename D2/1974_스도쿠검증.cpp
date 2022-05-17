#include <iostream>

using namespace std;

int arr[10][10];
int nbr[10];
int check;

void xcheck(int x, int y)
{
	int idx;
	nbr[10] = {0, };
	for (int i = 1; i <= 9; i++)
	{
		idx = arr[y][i];
		nbr[idx]++;
		if (nbr[idx] == 2)
		{
			check = 0;
			return;
		}
	}
	check++;
}

void ycheck(int x, int y)
{
	int idx;
	nbr[10] = {0, };
	for (int i = 1; i <= 9; i++)
	{
		idx = arr[i][x];
		nbr[idx]++;
		if (nbr[idx] == 2)
		{
			check = 0;
			return;
		}
	}
	check++;
}

void squarecheck(int x, int y)
{
	int idx;
	int xstart = (x - 1) / 3 * 3 + 1;
	int ystart = (y - 1) / 3 * 3 + 1;
	nbr[10] = {0, };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			idx = arr[ystart + i][xstart + j];
			nbr[idx]++;
			if (nbr[idx] == 2)
			{
				check = 0;
				return;
			}
		}
	}
	check++;
}

int main()
{
	int res;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		res = 1;
		for (int y = 1; y <= 9; y++)
		{
			for (int x = 1; x <= 9; x++)
				cin >> arr[y][x];
		}
		for (int y = 1; y <= 9; y++)
		{
			for (int x = 1; x <= 9; x++)
			{
				check = 0;
				xcheck(x, y);
				ycheck(x, y);
				squarecheck(x, y);
				if (check != 3)
				{
					res = 0;
					break;
				}
			}
			if (res == 0)
				break;
		}
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}