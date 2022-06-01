#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(0);
	int arr[100000]  = {0, };
	int T, num, i, cnt, res, idx, state;
	int test_case = 1;
	cin >> T;

	idx = 0;
	num = 2;
	while (num * num <= 10000000)
	{
		i = 2;
		state = 0;
		while (i * i <= num)
		{
			if (num % i == 0)
			{
				state = 1;
				break;
			}
			i++;
		}
		if (state == 0)
		{
			arr[idx] = num;
			idx++;
		}
		num++;
	}
	while (test_case <= T)
	{
		cin >> num;
		res = 1;
		idx = 0;
		while (num > 1)
		{
			if (arr[idx] == 0 || arr[idx] > num)
				break;
			cnt = 0;
			while (num % arr[idx] == 0)
			{
				num /= arr[idx];
				cnt++;
			}
			if (cnt % 2 != 0)
				res = res * arr[idx];
			idx++;
		}
		res = res * num;
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}