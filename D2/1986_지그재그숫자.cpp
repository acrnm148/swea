#include <iostream>

using namespace std;

int main()
{
	int sum;
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		sum = 0;
		cin >> N;
		for (int i = 1; i <= N; i++)
		{
			if (i % 2 == 1)
				sum += i;
			else
				sum -= i;
		}
		cout << "#" << test_case << " " << sum << "\n";
		test_case++;
	}
}