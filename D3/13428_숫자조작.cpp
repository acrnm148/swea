#include <iostream>

using namespace std;

int main()
{
	int arr[10] = {0, };
	int max, len, max_i, min, min_i;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		int tmp, idx;
		string str;
		max = 0;
		min = 1000000000;
		cin >> str;
		len = str.length();
		for (int i = 0; i < len; i++)
		{
			arr[i] = str[i] - '0';
			if (max < arr[i])
			{
				max = arr[i];
				max_i = i;
			}
			if (min > arr[i])
			{
				min = arr[i];
				min_i = i;
			}
		}
		cout << "#" << test_case << " ";
		//최소
		idx = 0;
		if (min_i == 0)
		{
			min = 1000000000;
			for (int i = 1; i < len; i++)
			{
				if (min > arr[i])
				{
					min = arr[i];
					min_i = i;
				}
			}
			idx++;
		}
		while (idx < len)
		{
			if (arr[idx] == min)
				break;
			else if (arr[idx] > min && min != 0)
			{
				tmp = arr[idx];
				arr[idx] = arr[min_i];
				arr[min_i] = tmp;
				break;
			}
			idx++;
		}
		for (int i = 0; i< len; i++)
			cout << arr[i];
		cout << " ";
		//초기화
		for (int i = 0; i < len; i++)
			arr[i] = str[i] - '0';
		//최대
		idx = 0;
		if (max_i == 0)
		{
			max = 0;
			for (int i = 1; i < len; i++)
			{
				if (max < arr[i])
				{
					max = arr[i];
					max_i = i;
				}
			}
			idx++;
		}
		while (idx < len)
		{
			if (arr[idx] == max)
				break;
			else if (arr[idx] < max)
			{
				tmp = arr[idx];
				arr[idx] = arr[max_i];
				arr[max_i] = tmp;
				break;
			}
			idx++;
		}
		for (int i = 0; i< len; i++)
			cout << arr[i];
		cout << "\n";
		test_case++;
	}
}