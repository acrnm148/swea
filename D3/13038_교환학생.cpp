#include <iostream>

using namespace std;

int main()
{
	int save[7] = {0, };
	int arr[7] = {0, };
	int cnt, day, visit, visit_day, min, idx;
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		cnt = 0;
		day = 0;
		idx = 0;
		arr[7] = {0, };
		save[7] = {0, };
		for (int i = 0; i < 7; i++)
		{
			cin >> arr[i];
			if (arr[i] == 1)
			{
				cnt++;
				save[idx] = i;
				idx++;
			}
		}
		day = (N / cnt - 1) * 7;
		N -= (N / cnt - 1) * cnt;
		min = 9999999;
		for (int i = 0; i < cnt; i++)
		{
			idx = save[i];
			visit = 0;
			visit_day = 0;
			while (visit < N)
			{
				if (arr[idx % 7] == 1)
					visit++;
				visit_day++;
				idx++;
			}
			if (min > visit_day)
				min = visit_day;
		}
		day += min;
		cout << "#" << test_case << " " << day << "\n";
		test_case++;
	}
}