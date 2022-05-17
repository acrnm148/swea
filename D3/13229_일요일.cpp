#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	int T, res;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> input;
		if (input == "SUN")
			res = 7;
		else if (input == "MON")
			res = 6;
		else if (input == "TUE")
			res = 5;
		else if (input == "WED")
			res = 4;
		else if (input == "THU")
			res = 3;
		else if (input == "FRI")
			res = 2;
		else if (input == "SAT")
			res = 1;
		cout << "#" << test_case << " " << res << "\n";
		test_case++;
	}
}