#include <iostream>

using namespace std;

int main()
{
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		int num, state;
		state = 0;
		cin >> num;
		cout << "#" << test_case << " ";
		for (int i = 1; i<= 9; i++)
		{
			if (num / i < 10 && num % i == 0)
			{
				state = 1;
				break;
			}
		}
		if (state == 0)
			cout << "No\n";
		else
			cout << "Yes\n";
		test_case++;
	}
}