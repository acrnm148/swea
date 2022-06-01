#include <iostream>
#include <string>
using namespace std;

int main()
{
	int min, max, len, nbr;
	int T;
	string N, num;
	char tmp;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		N = "";
		cin >> N;
		len = N.length();
		num = N;
		min = stoi(N);
		max = stoi(N);
		
		for (int idx = 0; idx < len - 1; idx++)
		{
			for (int i = idx + 1; i < len; i++)
			{
				num = N;
				tmp = num[idx]; // 이거이렇게하면안됨
				num[idx] = num[i];
				num[i] = tmp;
				if (num[0] != '0' && min > stoi(num))
					min = stoi(num);
				if (max < stoi(num))
					max = stoi(num);
			}
		}
		cout << "#" << test_case << " " << min << " " << max << "\n";
		test_case++;
	}
}