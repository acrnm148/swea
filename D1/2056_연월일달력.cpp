#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	int test_case = 1;
	int year, mon, day;
	string input;
	cin >> T;
	while (test_case <= T)
	{
		cin >> input;
		year = stoi(input.substr(0, 4));
		mon = stoi(input.substr(4, 2));
		day = stoi(input.substr(6, 2));
		if (mon == 1 || mon == 3 || mon == 5 || mon == 7 || mon == 8 ||\
			mon == 10 || mon == 12)
		{
			if (day >= 1 && day <= 31)
				cout << "#" << test_case << " " <<input.substr(0, 4) << "/" << input.substr(4, 2) << "/" << input.substr(6, 2) << "\n";
			else
				cout << "#" << test_case << " " << -1 << "\n";
		}
		else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
		{
			if (day >= 1 && day <= 30)
				cout << "#" << test_case << " " <<input.substr(0, 4) << "/" << input.substr(4, 2) << "/" << input.substr(6, 2) << "\n";
			else
				cout << "#" << test_case << " " << -1 << "\n";
		}
		else if (mon == 2)
		{
			if (day >= 1 && day <= 28)
				cout << "#" << test_case << " " <<input.substr(0, 4) << "/" << input.substr(4, 2) << "/" << input.substr(6, 2) << "\n";
			else
				cout << "#" << test_case << " " << -1 << "\n";
		}
		else
			cout << "#" << test_case << " " << -1 << "\n";
		test_case++;
	}
}