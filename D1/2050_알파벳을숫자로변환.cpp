#include <iostream>
#include <string>

using namespace std;

int main()
{
	int res;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		res = str[i] - 'A' + 1;
		cout << res << " ";
	}
}