#include <iostream>

using namespace std;

int main()
{
	int num_x, num_y;
	int nbr;
	int arr[11][11] = {0, };
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		nbr = 1;
		num_x = 1;
		num_y = 1;
		cin >> N;
		int tmp = N;
		while (N > 0)
		{
			for (int i = num_x; i <= N; i++)
			{
				arr[num_y][i] = nbr;
				nbr++;
			}
			num_y++;
			for (int i = num_y; i <= N; i++)
			{
				arr[i][N] = nbr;
				nbr++;
			}
			for (int i = N - 1; i >= num_x; i--)
			{
				arr[N][i] = nbr;
				nbr++;
			}
			for (int i = N - 1; i >= num_y; i--)
			{
				arr[i][num_x] = nbr;
				nbr++;
			}
			num_x++;
			N--;
		}
		cout << "#" << test_case << "\n";
		for (int y = 1; y <= tmp; y++)
		{
			for (int x = 1; x <= tmp; x++)
				cout << arr[y][x] << " ";
			cout << "\n";
		}
		test_case++;
	}
}