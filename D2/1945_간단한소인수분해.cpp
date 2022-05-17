#include <iostream>

using namespace std;

int N;

int check(int num, int cnt)
{
	if (N > 0 && N % num == 0)
	{
		N /= num;
		cnt = check(num, cnt + 1);
	}
	return cnt;
}

int main()
{
	int a, b, c, d, e;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		a = check(2, 0);
		b = check(3, 0);
		c = check(5, 0);
		d = check(7, 0);
		e = check(11, 0);
		cout << "#" << test_case << " " << a << " " << b << " " << c << " " << d << " " << e << "\n";
		test_case++;
	}
}