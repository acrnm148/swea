#include <iostream>

using namespace std;

int main()
{
	int h1, h2;
	int m1, m2;
	int hour, min;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> h1 >> m1 >> h2 >> m2;
		hour = h1 + h2;
		min = m1 + m2;
		if (min > 59)
		{
			min -= 60;
			hour++;
		}
		while (hour > 12)
			hour -= 12;
		cout << "#" << test_case << " " << hour << " " << min << "\n";
		test_case++;
	}
}