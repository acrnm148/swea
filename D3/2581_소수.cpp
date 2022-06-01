#include <iostream>

using namespace std;

int main()
{
	int M, N, state;
	int sum = 0;
	int min = 10001;
	cin >> M >> N;
	for (int i = M; i<= N; i++)
	{
		state = 0;
		if (i == 1)
		{
			state = 1;
			continue;
		}
		for (int num = 2; num < i; num++)
		{
			if (i % num == 0)
			{
				state = 1;
				break;
			}
		}
		if (state == 0)
		{
			sum += i;
			if (min > i)
				min = i;
		}
	}
	if (sum == 0)
		cout << "-1";
	else
		cout << sum << "\n" << min;
}