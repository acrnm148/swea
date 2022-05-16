#include <iostream>
#include <vector>
using namespace std;

int vec[1000001];

int main()
{
	int input;
	int max;
	long long res;
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		max = 0;
		res = 0;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> vec[i];
			if (max < vec[i])
				max = vec[i];
		}
		for (int i = 0; i < N; i++)
		{
			if (max == vec[i])
			{
				max = 0;
				for (int k = i + 1; k < N; k++)
				{
					if (max < vec[k])
						max = vec[k];
				}
			}
			if (max > vec[i])
				res += max - vec[i];
		}
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}