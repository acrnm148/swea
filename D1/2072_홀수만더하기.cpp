#include <iostream>
using namespace std;

int main(void)
{
	int idx = 1;
	int T = 0;
	int sum = 0;
	int arr[10];
	scanf("%d", &T);
	while (idx <= T)
	{
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] % 2 == 1)
				sum += arr[i];
		}
		cout << "#" << idx << " " << sum << "\n";
		sum = 0;
		idx++;
	}
}