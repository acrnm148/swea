#include <iostream>
#include <string>
using namespace std;

int main()
{
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		string str1 = "";
		string str2 = "";
		cin >> str1 >> str2;
		str1 = str1 + "a";
		cout << "#" << test_case << " ";
		if (str1 == str2)
			cout << "N\n";
		else
			cout << "Y\n";
		test_case++;
	}
}