#include <iostream>

using namespace std;

int main()
{
	int T, N, max;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		max = 0;
		cin >> N;
		int arr[101] = {0, };
		for (int i = 0; i < 1000; i++)
		{
			cin >> N;
			arr[N]++;
			if (max < arr[N])
				max = arr[N];
		}
		for (int i = 100; i >= 0; i--)
		{
			if (max == arr[i])
			{
				cout << "#" << test_case << " " << i << "\n";
				break;
			}
		}
		test_case++;
	}
}