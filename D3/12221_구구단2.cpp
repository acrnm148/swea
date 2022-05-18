#include <iostream>

using namespace std;

int main()
{
	int A, B, res;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> A >> B;
		if (A >= 10 || B >= 10)
			res = -1;
		else
			res = A * B;
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}