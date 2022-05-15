#include<iostream>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	cin >> T;
	int sum = 0;
	int arr[10];
	for(test_case = 1; test_case <= T; ++test_case)
	{
		for (int i = 0; i < 10; i++)
		{
			scanf("%d", &arr[i]);
			if (arr[i] % 2 == 1)
				sum += arr[i];
		}
		cout << "#" << test_case << " " << sum << "\n";
		sum = 0;
	}
	return 0;
}