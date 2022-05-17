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
		res = A + B;
		if (res >= 24)
			res-=24;
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}