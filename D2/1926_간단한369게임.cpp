#include <iostream>

using namespace std;

int main()
{
	int tmp;
	int N;
	int check;
	cin >> N;
	for (int num = 1; num <= N; num++)
	{
		check = 0;
		tmp = num;
		while (tmp > 0)
		{
			if (tmp % 10 == 3 || tmp % 10 == 6 || tmp % 10 == 9)
				check++;
			tmp = tmp / 10;
		}
		if (check == 0)
			cout << num;
		else if (check != 0)
		{
			for (int i = 0; i < check; i++)
				cout << "-";
		}
		if (num != N)
			cout << " ";
	}
}