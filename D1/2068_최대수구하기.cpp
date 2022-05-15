#include <iostream>
using namespace std;

int main()
{
	int T;
	int test_case = 1;
	int arr[10];
	int max;
	cin >> T;
	while (test_case <= T)
	{
		max = -1;
		for (int i = 0; i < 10; i++)
		{
			cin >> arr[i];
			if (arr[i] > max)
				max = arr[i];
		}
		cout << "#" << test_case << " " << max << "\n";
		test_case++;
	}
	return 0;
}