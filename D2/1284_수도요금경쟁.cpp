#include <iostream>

using namespace std;

int main()
{
	int A, B, res;
	int P, Q, R, S, W;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> P >> Q >> R >> S >> W;
		A = W * P;
		B = Q;
		if (W > R)
			B += (W - R) * S;
		if (A >= B)
			res = B;
		else
			res = A;
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}