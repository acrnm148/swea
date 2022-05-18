#include <iostream>

using namespace std;

int main()
{
	int len, cnt;
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cnt = 0;
		string str;
		cin >> str;
		len = str.length();
		cout << "#" << test_case << " ";
		for (int i = 0; i < len; i++)
		{
			if (str[i] == 'o')
				cnt++;
		}
		if (cnt + (15 - len) < 8)
			cout << "NO\n";
		else
			cout << "YES\n";
		test_case++;
	}

}