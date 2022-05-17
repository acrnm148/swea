#include <iostream>

using namespace std;

int main()
{
	int T, num;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> num;
		cout << "#" << test_case << " " << num / 3 << "\n";
		test_case++;
	}
}