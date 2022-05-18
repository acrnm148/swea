#include <iostream>

using namespace std;

int main()
{
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		int N, D, range, res;
		cin >> N >> D;
		range = D * 2 + 1;
		res = N / range;
		if (N % range != 0)
			res++;
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}