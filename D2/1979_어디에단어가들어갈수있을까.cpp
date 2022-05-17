#include <iostream>

using namespace std;

int arr[16][16];
int cnt, check;
int K, N;

void xcheck(int y, int x)
{
	check = 0;
	for (int i = x; i <= N; i++)
	{
		if (arr[y][i] == 1)
			check++;
		else
			break;
	}
	if (check == K)
	{
		if (x != 1)
		{
			if (arr[y][x - 1] == 0)
				cnt++;
		}
		else
			cnt++;
	}
}

void ycheck(int y, int x)
{
	check = 0;
	for (int i = y; i <= N; i++)
	{
		if (arr[i][x] == 1)
			check++;
		else
			break;
	}
	if (check == K)
	{
		if (y != 1)
		{
			if (arr[y - 1][x] == 0)
				cnt++;
		}
		else
			cnt++;
	}
}

int main()
{
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cnt = 0;
		cin >> N >> K;
		for (int y = 1; y <= N; y++)
		{
			for (int x = 1; x <= N; x++)
				cin >> arr[y][x];
		}
		for (int y = 1; y <= N; y++)
		{
			for (int x = 1; x <= N; x++)
			{
				if (arr[y][x] == 1)
				{
					xcheck(y, x);
					ycheck(y, x);
				}
			}
		}
		cout << "#" << test_case << " " << cnt << "\n";
		test_case++;
	}
}