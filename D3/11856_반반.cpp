#include <iostream>

using namespace std;

int main()
{
	int cnt1, cnt2;
	char A, B;
	int T, len, state;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		string str;
		cin >> str;
		cout << "#" << test_case << " ";
		if (str[0] == str[1] && str[2] == str[3] && str[0] != str[2])
			cout << "Yes\n";
		else if (str[0] == str[2] && str[3] == str[1] && str[0] != str[3])
			cout << "Yes\n";
		else if (str[0] == str[3] && str[2] == str[1] && str[3] != str[2])
			cout << "Yes\n";	
		else
			cout << "No\n";


		test_case++;
	}
}