#include <iostream>

using namespace std;

int main()
{
	int T;
	int test_case = 1;
	int a, b;
	cin >> T;
	while (test_case <= T)
	{
		cin >> a >> b;
		cout << "#" << test_case << " " << a / b << " " << a % b << "\n";
		test_case++;
	}
}