#include <iostream>
using namespace std;

int main()
{
	int res = 1;
	int num;
	cin >> num;
	cout << res << " ";
	for (int i = 1; i <= num; i++)
	{
		res = res * 2;
		cout << res << " ";
	}
}