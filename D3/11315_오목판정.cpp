#include <iostream>

using namespace std;

char arr[21][21];
int N;

int xcheck(int y, int x)
{
	int cnt = 0;
	if (x + 4 <= N)
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[y][x + i] == 'o')
			{
				cnt++;
				if (cnt == 5)
					return 1;
			}
			else
				return 0;
		}
	}
	return 0;
}

int ycheck(int y, int x)
{
	int cnt = 0;
	if (y + 4 <= N)
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[y + i][x] == 'o')
			{
				cnt++;
				if (cnt == 5)
					return 1;
			}
			else
				return 0;
		}
	}
	return 0;
}

int diagcheck(int y, int x)
{
	int right = 0;
	int left = 0;
	if (x + 4 <= N && y + 4 <= N)
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[y + i][x + i] == 'o')
			{
				right++;
				if (right == 5)
					return 1;
			}
		}
	}
	if (x - 4 >= 1 && y + 4 <= N)
	{
		for (int i = 0; i < 5; i++)
		{
			if (arr[y + i][x - i] == 'o')
			{
				left++;
				if (left == 5)
					return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int T, res_x, res_y, res_d, state;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		state = 0;
		cin >> N;
		for (int y = 1; y <= N; y++)
		{
			for (int x = 1; x <= N; x++)
			{
				cin >> arr[y][x];
				cout << arr[y][x] << " ";
			}
			cout << "\n";
		}
		cout << "#" << test_case << " ";
		for (int y = 1; y <= N; y++)
		{
			for (int x = 1; x <= N; x++)
			{
				if (arr[y][x] == 'o')
				{
					res_x = xcheck(y, x);
					if (res_x == 0)
					{	
						res_y = ycheck(y, x);
						if (res_y == 0)
							res_d = diagcheck(y, x);
					}
					if (res_x == 1 || res_y == 1 || res_d == 1)
					{
						state = 1;
						break;
					}
				}
			}
			if (state == 1)
				break;
		}
		if (state == 1)
			cout << "YES\n";
		else
			cout << "NO\n";
		test_case++;
	}
}