#include <iostream>

using namespace std;

int main()
{
	int T, N, input[100000];
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		double avg = 0;
		int cnt = 0;
		cin >> N;
		for (int i = 0; i< N; i++)
		{
			cin >> input[i];
			avg += input[i];
		}
		avg /= N;
		for (int i = 0; i< N; i++)
		{
			if (input[i] <= avg)
				cnt++;
		}
		cout << "#" << test_case << " " << cnt << "\n";
		test_case++;
	}
}