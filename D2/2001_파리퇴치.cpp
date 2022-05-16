#include <iostream>
#include <cstring>
using namespace std;

int arr[16][16];

int main()
{
	int max, sum;
	int T, N, M;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		sum = 0;
		max = 0;
		cin >> N >> M;
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
				cin >> arr[y][x];
		}
		for (int y = 0; y <= N - M; y++)
		{
			for (int x = 0; x <= N - M; x++)
			{
				sum = 0;
				for (int i = 0; i < M; i++)
				{
					for (int j = 0; j < M; j++)
						sum += arr[y + i][x + j];
					if (max < sum)
						max = sum;
				}
			}
		}
		cout << "#" << test_case << " " << max << "\n";
		test_case++;
	}
}