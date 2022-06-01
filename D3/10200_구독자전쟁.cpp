#include <iostream>

using namespace std;

int main()
{
	int T, A, B, N, min, max;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N >> A >> B;
		if (A + B - N < 0)
			min = 0;
		else
			min = A + B - N;
		if (A >= B)
			max = B;
		else
			max = A;
		cout << "#" << test_case << " " << max << " " << min << "\n";
		test_case++;
	}
}