#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string str;
	int T, len, state;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		str = "";
		cin >> str;
		len = str.length();
		for (int i = 1; i < len; i++)
		{
			for (int j = 0; j < i; j++)
			{
				if (str[i] == str[j])
				{
					str[i] = '0';
					str[j] = '0';
				}
			}
		}
		state = 0;
		cout << "#" << test_case << " ";
		sort(str.begin(), str.end());
		for (int i = 0; i < len; i++)
		{
			if (str[i] != '0')
			{
				cout << str[i];
				state++;
			}
		}
		if (state == 0)
			cout << "Good";
		cout << "\n";
		test_case++;
	}
}