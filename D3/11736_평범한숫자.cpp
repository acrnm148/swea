#include <iostream>

using namespace std;

int main()
{
	int common;
	int arr[30];
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		common = 0;
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> arr[i];
		for (int i = 1; i < N - 1; i++)
		{
			if (!(arr[i] > arr[i - 1] && arr[i] > arr[i + 1]))
			{
				if (!(arr[i] < arr[i - 1] && arr[i] < arr[i + 1]))
					common++;
			}
		}
		cout << "#" << test_case << " " << common << "\n";
		test_case++;
	}
}