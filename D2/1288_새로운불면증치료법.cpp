#include <iostream>

using namespace std;

int main()
{
	int N, num, idx, tmp;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		int arr[10] = {0, };
		cin >> num;
		tmp = num;
		idx = 1;
		while (1)
		{
			num = tmp * idx;
			while (num > 0)
			{
				arr[num % 10]++;
				num /= 10;
			}
			int i;
			for (i = 0; i <10; i++)
			{
				if (arr[i] == 0)
					break;
			}
			if (i == 10)
			{
				cout << "#" << test_case << " " << tmp * idx << "\n";
				break;
			}
			idx++;
		}

		test_case++;
	}
}