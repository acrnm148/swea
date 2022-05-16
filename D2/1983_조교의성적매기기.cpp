#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int rank = 0;
	int test1, test2, test3;
	vector<string> vec{"A+", "A0", "A-", "B+", "B0", "B-", "C+", "C0", "C-", "D0"};
	float arr[101];
	int T, N, K;
	float score;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N >> K;
		for (int i = 1; i <= N; i++)
		{
			cin >> test1 >> test2 >> test3;
			arr[i] = (test1 * 0.35) + (test2 * 0.45) + (test3 * 0.2);
		}
		score = arr[K];
		sort(&arr[1], &arr[1 + N]);
		reverse(&arr[1], &arr[1 + N]);
		cout << "#" << test_case << " ";
		for (int i = 1; i<= N; i++)
		{
			if (score == arr[i])
			{
				rank = i / (N / 10);
				if (i % (N / 10) != 0)
					cout << vec[rank] << "\n";
				else
					cout << vec[rank - 1] << "\n";
			}
		}
		test_case++;
	}
}