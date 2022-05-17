#include <iostream>

using namespace std;

int get_max(int small, int big, int *s_arr, int *b_arr)
{
	int sum;
	int max = 0;
	for (int i = 0; i <= big - small; i++)
	{
		sum = 0;
		for (int j = 0; j < small; j++)
			sum += b_arr[i + j] * s_arr[j];
		if (max < sum)
			max = sum;
	}
	return max;
}

int main()
{
	int a[21] = {0, };
	int b[21] = {0, };
	int T;
	int res, N, M;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		res = 0;
		cin >> N >> M;
		for (int i = 0; i < N; i++)
			cin >> a[i];
		for (int i = 0; i < M; i++)
			cin >> b[i];
		if (N < M)
			res = get_max(N, M, a, b);
		else
			res = get_max(M, N, b, a);
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}