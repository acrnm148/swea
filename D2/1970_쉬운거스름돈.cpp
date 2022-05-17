#include <iostream>

using namespace std;

int main()
{
	int cnt;
	int money[8] = {50000, 10000, 5000, 1000, 500, 100, 50, 10};
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		cout << "#" << test_case << "\n";
		for (int i = 0; i < 8; i++)
		{
			cnt = 0;
			while (N >= money[i])
			{
				cnt++;
				N -= money[i];
			}
			cout << cnt << " ";
		}
		cout <<"\n";
		test_case++;
	}
}