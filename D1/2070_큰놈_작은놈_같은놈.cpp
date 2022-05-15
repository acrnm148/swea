#include <iostream>
using namespace std;

int main()
{
	int T;
	int test_case = 1;
	int num1, num2;
	cin >> T;
	while (test_case <= T)
	{
		cin >> num1 >> num2;
		if (num1 > num2)
			cout << "#" << test_case << " >\n"; 
		else if (num1 < num2)
			cout << "#" << test_case << " <\n"; 
		else
			cout << "#" << test_case << " =\n"; 
		test_case++;
	}
	return 0;
}