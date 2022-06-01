#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int arr[100001] = {0, };
	int T, N, num, state;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		state = 0;
		for (int i = 1; i <= N; i++)
		{
			cin >> num;
			arr[num]++;
			if (arr[num] == 2)
				state = 1;
		}
		cout << "#" << test_case << " ";
		if (state == 0)
			cout << "Yes\n";
		else
			cout << "No\n";
		memset(arr, 0,sizeof(arr));
		test_case++;
	}
}