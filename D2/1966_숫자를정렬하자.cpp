#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int arr[51] = {0, };
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		for (int i = 0; i < N; i++)
			cin >> arr[i];
		sort(arr, arr + N);
		cout << "#" << test_case << " ";
		for (int i = 0; i< N; i++)
		{
			cout << arr[i];
			if (i != N-1)
				cout <<" ";
			else
				cout << "\n";
		}
		test_case++;
	}
}