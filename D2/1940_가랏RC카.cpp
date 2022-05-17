#include <iostream>

using namespace std;

int main()
{
	int T, N;
	int dis, spd, new_spd, sec, cmd;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		dis = 0;
		spd = 0;
		sec = 0;
		cin >> N;
		while (sec < N)
		{
			cin >> cmd;
			if (cmd == 1)
			{
				cin >> new_spd;
				spd += new_spd;
			}
			else if (cmd == 2)
			{
				cin >> new_spd;
				if (spd < new_spd)
					spd = 0;
				else
					spd -= new_spd;
			}
			dis += spd;
			sec++;
		}
		cout << "#" << test_case << " " << dis << "\n";
		test_case++;
	}
}