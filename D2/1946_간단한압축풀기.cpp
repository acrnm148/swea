#include <iostream>

using namespace std;

int main()
{
	int len;
	int T, N;
	int test_case = 1;
	char ch[10];
	int cnt[10];
	cin >> T;
	while (test_case <= T)
	{
		len = 1;
		cin >> N;
		for (int i = 0; i< N; i++)
			cin >> ch[i] >> cnt[i];
		cout << "#" << test_case << "\n";
		for (int i = 0; i< N; i++)
		{
			for (int j = 0; j < cnt[i]; j++)
			{
				cout << ch[i];
				if (len % 10 == 0)
					cout << "\n";
				len++;
			}
		}
		if (len % 10 != 0)
			cout << "\n";
		test_case++;
	}
}