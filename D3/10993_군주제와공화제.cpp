#include <iostream>

using namespace std;

struct Country
{
	double x;
	double y;
	double power;
};

int main()
{
	int res[1001] = {0, };
	double gap[1001] = {0, };
	struct Country arr[1001];
	int T, N, max_i,state, cnt;
	double enemy, max;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		for (int i = 1; i <= N; i++)
			cin >> arr[i].x >> arr[i].y >> arr[i].power;
		for (int i = 1; i <= N; i++)
		{
			cnt = 0;
			state = 0;
			max = 0;
			max_i = 0;
			for (int j = 1; j <= N; j++)
			{
				if (j != i)
				{
					enemy = arr[j].power / ((arr[i].x - arr[j].x) * (arr[i].x - arr[j].x) + (arr[i].y - arr[j].y) * (arr[i].y - arr[j].y));
					if (max < enemy)
						max = enemy;
					gap[j] = enemy;
				}
			}
			for (int j = 1; j <= N; j++)
			{
				if (j != i)
				{
					if (arr[i].power < gap[j])
					{
						state = 1;
						if (max == gap[j])
						{
							max_i = j;
							cnt++;
							if (cnt == 2)
							{
								state = 2;
								break;
							}
						}
					}
				}
			}
			if (state == 2)
				res[i] = 3000;
			else if (state == 0)
				res[i] = 2000;
			else
				res[i] = max_i;
		}
		cout << "#" << test_case << " ";
		for (int i = 1; i <= N; i++)
		{
			if (res[i] == 2000)
				cout << "K ";
			else if (res[i] == 3000)
				cout << "D ";
			else
			{
				while (res[res[i]] != 2000 && res[res[i]] != 3000)
					res[i] = res[res[i]];
				cout << res[i] << " ";
			}
		}
		cout << "\n";
		test_case++;
	}
}