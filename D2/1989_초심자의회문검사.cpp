#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	int T, len, idx;
	int test_case = 1;
	int res = 0;
	cin >> T;
	while (test_case <= T)
	{
		cin >> str;
		idx = 0;
		len = str.length() - 1;
		while (idx < len)
		{
			if (str[idx] != str[len])
			{
				res = 0;
				break;
			}
			res = 1;
			idx++;
			len--;
		}
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}