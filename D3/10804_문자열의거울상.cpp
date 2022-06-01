#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;

	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		str = "";
		cin >> str;
		reverse(str.begin(), str.end());
		for (int i = 0; i < str.length(); i++)
		{
			if (str[i] == 'p')
			{
				str[i] = 'q';
				continue;
			}
			if (str[i] == 'q')
			{
				str[i] = 'p';
				continue;
			}
			if (str[i] == 'b')
			{
				str[i] = 'd';
				continue;
			}
			if (str[i] == 'd')
			{
				str[i] = 'b';
				continue;
			}
		}
		cout << "#" << test_case << " " << str << "\n";
		test_case++;
	}
}