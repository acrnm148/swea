#include <iostream>

using namespace std;

int main()
{
	int arr[11] = {0,};
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		cout << "#" << test_case << "\n";
		for (int j = 1; j <= N; j++)
		{
			for (int i = 1; i <= j; i++)
			{
				arr[1] = 1;
				arr[j] = 1;
				if (i == 1 || i == j)
					cout << arr[i];
				else if (i > 1 && i < j)
					cout << arr[i] + arr[i - 1];
				if (i != j)
					cout << " ";
			}
			int tmp = 1;
			for (int i = 2; i < j; i++)
			{
				arr[i] = arr[i] + tmp;
				tmp = arr[i] - tmp;
			}
			cout << "\n";
		}
		test_case++;
	}
}