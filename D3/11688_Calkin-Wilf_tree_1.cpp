#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T, len, a, b;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		a = 1;
		b = 1;
		string str = "";
		cin >> str;
		len = str.length();
		for (int i = 0; i < len; i++)
		{
			if (str[i] == 'L')
				b = a + b;
			else
				a = a + b;
		}
		int idx = 2;
		cout << "#" << test_case << " " << a << " " << b << "\n";
		test_case++;
	}
}