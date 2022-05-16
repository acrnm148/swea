#include <iostream>
#include <string>
using namespace std;

#define MAX 30

int main()
{
	int len;
	int save[10] = {0, };
	int T;
	int test_case = 1;
	int cnt;
	string str;
	cin >> T;
	while (test_case <= T)
	{
		len = 0;
		cnt = 0;
		cin >> str;
		for (int i = 0; i < MAX - 1; i++)
		{
			if (cnt == 0)
			{
				save[i] = str[i];
				len++;
			}
			if (save[0] == str[i + 1])
			{
				for (int j = 0; j < len; j++)
				{
					if (save[j] == str[i + j + 1])
					{
						if (j == len - 1)
						{
							cnt++;
							break;
						}
					}
				}
			}
			if (cnt != 0)
				break;
		}
		cout << "#" << test_case << " " << len << "\n";
		test_case++;
	}
}