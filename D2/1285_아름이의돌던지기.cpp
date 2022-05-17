#include <iostream>

using namespace std;

int main()
{
	int input, min, same;
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		same = 1;
		min = 100001;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> input;
			if (input < 0)
				input = -input;
			if (min == input)
				same++;
			else if (min > input)
			{
				min  = input;
				same = 1;
			}
		}
		cout << "#" << test_case << " " << min << " " << same << "\n";
		test_case++;
	}
}