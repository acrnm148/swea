#include <iostream>

using namespace std;

int main()
{
	int month[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int mon1, mon2, day1, day2;
	int T, res;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		res = 0;
		cin >> mon1 >> day1 >> mon2 >> day2;
		if (mon1 == mon2)
			res = day2 - (day1 - 1);
		else
		{
			res += month[mon1] - (day1 - 1);
			res += day2;
			mon1++;
			mon2--;
			for (int i = mon1; i <= mon2; i++)
				res += month[i];
		}
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}