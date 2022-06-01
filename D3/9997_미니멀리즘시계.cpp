#include <iostream>

using namespace std;

int main()
{
	int T, ang, h, m;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		h = 0;
		m = 0;
		cin >> ang;
		while (ang >= 30)
		{
			ang = ang - 30;
			h++;
		}
		if (h == 12)
			h  = 0;
		m = ang * 2;
		cout << "#" << test_case << " " << h << " " << m << "\n";
		test_case++;
	}
}