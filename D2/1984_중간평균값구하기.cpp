#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
	float sum;
	int arr[10];
	int T;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		sum = 0;
		for (int i = 0; i < 10; i++)
			cin >> arr[i];
		sort(arr, arr + 10);
		for (int i = 1; i< 9; i++)
			sum += arr[i];
		cout << "#" << test_case << " " << floor((sum / 8) + 0.5) << "\n";
		test_case++;
	}
}