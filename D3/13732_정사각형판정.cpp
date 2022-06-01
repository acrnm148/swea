#include <iostream>

using namespace std;

char arr[30][30];
int N;

int check_square(int x, int y, int *state)
{
	*state += 1;
	int lenx = 0;
	int leny = 0;
	for (int j = x; j < N; j++)
	{
		if (arr[y][j] == '#')
			lenx++;
		else
			break;
	}
	for (int i = y; i < N; i++)
	{
		if (arr[i][x] == '#')
			leny++;
		else
			break;
	}
	if (lenx != leny)
		return 0;
	else
	{
		for (int i = y; i < y + leny; i++)
		{
			for (int j = x; j < x + lenx; j++)
			{
				if (arr[i][j] == '#')
					arr[i][j] = *state + '0';
				else
					return 0;
			}
		}
	}
	return 1;
}

int main()
{
	int T, res, state;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		arr[N][N] = {0, };
		state = 1;
		res = 0;
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
				cin >> arr[y][x];
		}
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
			{
				if (arr[y][x] == '#')
				{
					if (state > 1)
					{
						res = 0;
						break;
					}
					res = check_square(x, y, &state);
				}
			}
			if (state > 1 && res == 0)
				break;
		}
		cout << "#" << test_case << " ";
		if (res == 1)
			cout << "yes\n";
		else
			cout << "no\n";
		test_case++;
	}
}