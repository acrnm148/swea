#include <iostream>

using namespace std;

int main()
{
	int TC, state;
	long long N;
	double pd, pg;
	int test_case = 1;
	cin >> TC;
	while (test_case <= TC)
	{
		state = 0;
		cin >> N >> pd >> pg;
		if ((pg == 100 && pd < 100) || (pg == 0 && pd > 0))
			state = 1;
		if (state == 0)
		{
			for (long long i = 1; i <= N; i++)
			{
				if ((pd * i / 100) - (int)pd * i / 100  == 0)
				{
					state = 0;
					break;
				}
				state = 1;
			}
		}
		cout << "#" << test_case << " ";
		if (state == 0)
			cout << "Possible\n";
		else
			cout << "Broken\n";
		test_case++;
	}
	
}