#include <iostream>

using namespace std;

int main()
{
	int cnt;
	int n1, n2, n3;
	int arr[8][8];
	int T, N;
	int test_case = 1;
	cin >> T;
	while (test_case <= T)
	{
		cin >> N;
		n1 = 0;
		n2 = N-1;
		n3 = N-1;
		cnt = 0;
		for (int y = 0; y < N; y++)
		{
			for (int x = 0; x < N; x++)
				cin >> arr[y][x];
		}
		cout << "#" << test_case << "\n";
		while (n1 < N)
		{
			for (int y = N-1; y >= 0; y--)
				cout << arr[y][n1];
			cout << " ";
			for (int x = N-1; x >= 0; x--)
				cout << arr[n2][x];
			cout << " ";
			for (int y = 0; y <= N-1; y++)
				cout << arr[y][n3];
			cout << "\n";
			n1++;
			n2--;
			n3--;
		}
		test_case++;
	}
}